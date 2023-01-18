%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "exprnTree.h"
 #include "reg.h"
 #include "exprnTree.c"
 int yylex(void);
 reg_index regf;
 extern FILE *yyin;
 FILE* ip;

%}

%union{
    struct node *no;

}
%type <no> expr NUM program END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END {
    FILE *fp = fopen("exprnTree.xsm", "w"); 
    $$ = $2;
    fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
    fprintf(fp,"MOV SP, 4095\n");
    regf = codeGen($1,fp);
    fprintf(fp,"PUSH R%d\n",regf);
	freeReg();
    printAndExit(fp);
    fclose(fp);
    fclose(ip);
    exit(0);
   }
  ;

expr : expr PLUS expr  {$$ = makeOperatorNode('+',$1,$3);}
  | expr MINUS expr   {$$ = makeOperatorNode('-',$1,$3);}
  | expr MUL expr {$$ = makeOperatorNode('*',$1,$3);}
  | expr DIV expr {$$ = makeOperatorNode('/',$1,$3);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  ;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    exit(1);
}


int main(int argc, char* argv[]) {

  if(argc > 1) { 
  ip = fopen(argv[1], "r");
  if(ip) yyin = ip;
  }
  yyparse();
  return 0;
}