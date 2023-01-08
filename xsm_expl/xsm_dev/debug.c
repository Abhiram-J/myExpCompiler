#include "debug.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static
debug_status
_db_status;

const
char *_db_commands_lh[] = {
	"step",
	"continue",
	"reg",
	"mem",
	"list",
	"stacktrace",
	"watch",
	"watchclear",
	"exit",
	"help",
	"val"
};

const
char *_db_commands_sh[] = {
	"s",
	"c",
	"r",
	"m",
	"l",
	"st",
	"w",
	"wc",
	"e",
	"h",
	"v"
};

int
debug_init ()
{
	_db_status.state = OFF;
	
	debug_watch_clear ();

	return TRUE;
}

int
debug_watch_add (int loc)
{
	if (_db_status.wp_size >= DEBUG_MAX_WP)
		return FALSE;

	_db_status.wp[_db_status.wp_size] = loc;
	_db_status.wp_size++;

	printf("Watch point added at %d.\n", loc);
	return TRUE;
}

void
debug_watch_clear ()
{
	_db_status.wp_size = 0;
}

int
debug_watch_test (int mem_min, int mem_max)
{
	int i, loc;

	if (mem_min < 0)
		return DEBUG_ERROR;

	for (i = 0; i < _db_status.wp_size; ++i)
	{
		loc = machine_translate_address(_db_status.wp[i], 0);
		if (mem_min == loc || loc == mem_max)
		{
			return i;
		}
	}

	return DEBUG_ERROR;
}

/* The instruction fetch-exec cycle will repeatedly call this function before each
 * instruction exec phase.
 * This function will invoke the debug mode, if necessary.
 * @param curr_ip The current [physical] address of IP.
 */
int
debug_next_step (int curr_ip)
{
	int mem_low, mem_high;
	int wp = DEBUG_ERROR;

	_db_status.ip = curr_ip;

	machine_get_mem_access (&mem_low, &mem_high);

	if (mem_low > 0)
		wp = debug_watch_test(mem_low, mem_high);

	if (wp >= 0)
	{
		printf ("Watchpoint at %d has triggered the debugger.\n", _db_status.wp[wp]);
		_db_status.state = ON;
	}

	if (_db_status.state == ON)
	{
		return debug_show_interface ();
	}

	return TRUE;
}

int
debug_show_interface ()
{
	char command[DEBUG_COMMAND_LEN];
	int done = FALSE;
	char next_instr[DEBUG_STRING_LEN];

	memory_retrieve_raw_instr (next_instr, machine_translate_address(_db_status.ip,FALSE));

	printf ("Next instruction to execute: %s\n", next_instr);

	while (!done)
	{
		printf ("debug> ");
		fgets (command, DEBUG_COMMAND_LEN, stdin);

		// remove the dangling \n from fgets
		strtok(command, "\n");

		if (!strcmp(command, "exit") || !strcmp(command, "e")){
			debug_deactivate();
			return FALSE;
		}
		
		done = debug_command (command);
	}

	return TRUE;
}

int
debug_command(char *command)
{
	char *arg1, *cmd, *arg2;
	int code;

	const char *delim = " \t";

	cmd = strtok(command, delim);

	code = debug_command_code (cmd);

	switch (code)
	{
		case DEBUG_STEP:
			return TRUE;

		case DEBUG_CONTINUE:
			debug_deactivate();
			return TRUE;

		case DEBUG_REG:
			arg1 = strtok(NULL, delim);
			if (!arg1)
			{
				debug_display_all_registers();
			}
			else{
				arg2 = strtok(NULL, delim);
				if (!arg2)
				{
					debug_display_register(arg1);
				}
				else
				{
					debug_display_range_reg(arg1, arg2);
				}
			}
			break;

		case DEBUG_MEM:
			arg1 = strtok (NULL, delim);
			arg2 = strtok (NULL, delim);

			if (arg2)
			{
				debug_display_mem_range(atoi(arg1), atoi(arg2));
			}
			else
			{
				debug_display_mem(atoi(arg1));
			}
			break;
		
		case DEBUG_HELP:
			debug_display_help();
			break;
			
		case DEBUG_VAL:
			arg1 = strtok (NULL, delim);
			debug_display_val (arg1);
			break;

		case DEBUG_LIST:
			debug_display_list();
			break;

		case DEBUG_STACK:
			debug_display_stack();
			break;

		case DEBUG_WATCH:
			arg1 = strtok (NULL, delim);
			if(arg1)
				debug_watch_add(atoi(arg1));
			else
				printf("Unknown command \"%s\". See \"help\" for more information.\n",command);
			break;

		case DEBUG_WATCHCLEAR:
			debug_watch_clear();
			printf("Watch points cleared.\n");
			break;
		
		default:
			printf("Unknown command \"%s\". See \"help\" for more information.\n",command);
	}

	return FALSE;
}

int
debug_command_code (const char *cmd)
{
	int i;

	for (i = 0; i <= DEBUG_VAL; ++i)
	{
		if (!strcmp(cmd, _db_commands_lh[i]))
			return i;
	}

	for (i = 0; i <= DEBUG_VAL; ++i)
	{
		if (!strcmp(cmd, _db_commands_sh[i]))
			return i;
	}

	return -1;
}

int
debug_display_all_registers()
{
	const char **reg_names = registers_names ();
	int num_regs = registers_len ();
	int i;
	char *content;

	for (i = 0; i < num_regs; ++i)
	{
		content = registers_get_string (reg_names[i]);
		printf ("%s: %s\n", reg_names[i], content);
	}

	return TRUE;
}

int
debug_display_register (const char *regname)
{
	char *content;

	content = registers_get_string (regname);

	if (!content)
	{
		printf ("No such register.\n");
		return FALSE;
	}

	printf ("%s: %s\n", regname, content);
	return TRUE;
}

int
debug_display_range_reg (const char *reg_b_name, const char *reg_e_name)
{
	const char **reg_names = registers_names ();
	int num_regs = registers_len ();
	int i;
	char *content;

	for (i = 0; i < num_regs; i++)
	{
		if (!strcasecmp (reg_b_name, reg_names[i]))
			break;
	}

	for (; i < num_regs; i++)
	{
		content = registers_get_string (reg_names[i]);

		printf ("%s: %s\n", reg_names[i], content);

		if (!strcasecmp (reg_e_name, reg_names[i]))
			break;
	}

	return TRUE;
}

int
debug_display_mem(int page)
{
	xsm_word *word;
	int i, ptr;
	char *content;

	FILE *fp;
	
	fp = fopen("mem","w");
	
	page = machine_translate_address(page*512,0) / 512;
	
	word = memory_get_page(page);

	if (!word)
	{
		printf ("No such page.\n");
		return FALSE;
	}

	ptr = page * XSM_PAGE_SIZE;

	// write to file mem
	
	for (i = 0; i < XSM_PAGE_SIZE; i++)
	{
		word = memory_get_word(ptr);
		content = word_get_string(word);
		fprintf(fp,"+%d: %s\n", i, content);
		ptr++; 
	}
	
	fclose(fp);
	
	printf("Written to file mem\n");
	return TRUE;
}


int
debug_display_mem_range (int page_l, int page_h)
{
	int i;

	for (i = page_l; i <= page_h; ++i)
	{
		printf ("Page: %d\n", i);
		debug_display_mem(i);
	}

	return TRUE;
}

int debug_display_val(char *mem){
	xsm_word *mword;	
	int addr;
	
	addr = machine_translate_address(atoi(mem), 0);
	mword = memory_get_word(addr);
	printf("%s\n",word_get_string(mword));
	
	return TRUE;
}

void
debug_activate ()
{
	/* Activate the debugger. */
	_db_status.state = ON;
}

void
debug_deactivate ()
{
	/* Activate the debugger. */
	_db_status.state = OFF;
}

int
debug_display_list ()
{
	int i, addr;
    char instr[DEBUG_STRING_LEN];

    for (i = 0; i <= 2 * DEBUG_LIST_LEN; i++)
    {
        addr = machine_translate_address(_db_status.ip + (i - DEBUG_LIST_LEN) * XSM_INSTRUCTION_SIZE, FALSE);
        if (addr >= 0)
            memory_retrieve_raw_instr(instr, addr);
        else
            instr[0] = '\0';

        if (i == DEBUG_LIST_LEN)
            printf("%d* \t %s \n", _db_status.ip + (i - DEBUG_LIST_LEN) * XSM_INSTRUCTION_SIZE, instr);
        else
            printf("%d \t %s \n", _db_status.ip + (i - DEBUG_LIST_LEN) * XSM_INSTRUCTION_SIZE, instr);
    }

    return TRUE;
}

int
debug_display_stack()
{
	int i, addr, sp, bp;
    char *instr;
	xsm_word *sp_reg, *word;

	sp = registers_get_integer("SP");
	bp = registers_get_integer("BP");

	printf("SP: %d\n", sp);
	printf("BP: %d\n", bp);

    for (i = 0; i < DEBUG_STACK_LEN; i++)
    {
		if((sp - i) < 8*512 || (sp - i) >= 10*512)
			continue;

        addr = machine_translate_address(sp - i, FALSE);
		if (addr >= 0)
		{
            word = memory_get_word(addr);
			instr = word_get_string(word);
		}
        else
            instr[0] = '\0';

		if(i == 0)
			printf("[SP]:    %s \n", instr);
		else if(i >= 10)
			printf("[SP-%d]: %s \n", i, instr);
		else
			printf("[SP-%d]:  %s \n", i, instr);
    }

	return TRUE;
}

void
debug_display_help(){
	int i = 0;
	printf("\nAvailable commands: \n"); 
	for (i = 0; i <= DEBUG_VAL; i++)
		{
			printf("\t%s - %s\n", _db_commands_lh[i], _db_commands_sh[i]);
		}

}
