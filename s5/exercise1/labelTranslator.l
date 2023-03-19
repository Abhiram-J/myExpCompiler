%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "y.tab.h"
	#include "labelTranslator.h"
	#include "labelTranslator.c"

    int yyerror(char *s);
	int currPass = 1;
	int currAddr = -7;
	FILE* fp;
    FILE* ip;
	struct labelAddressTable* lat;

%}


%%

[L|F][0-9]+:\n 	    { if(currPass == 1) addLabel(lat, yytext, 2056 + 2*(currAddr-1)); }

[L|F][0-9]+\n		    {

						if(currPass == 2) {

							int res = searchLabel(lat,yytext);
                            if ( res == -1 ) {
                                yyerror("Label not found\n");
                            }else{
                                fprintf(fp,"%d\n",res);
                            }
						} else {
							++currAddr;
                        }

					    }
"MAIN":\n                { if(currPass == 1) addLabel(lat, yytext, 2056 + 2*(currAddr-1)); }
"MAIN"\n                 {

						if(currPass == 2) {

							int res = searchLabel(lat,yytext);
                            if ( res == -1 ) {
                                yyerror("Label not found\n");
                            }else{
                                fprintf(fp,"%d\n",res);
                            }
						} else {
							++currAddr;
                        } 
                        }

[\n]				    {	
						if ( currPass == 1 ) ++currAddr;
						else fprintf(fp,"\n");
					    }

.					    { if(currPass == 2) fprintf(fp,"%s",yytext);}

%%


int yyerror(char *s) {
    printf("yyerror: %s\n", s);
    exit(1);
}

int yywrap(void) {
	if(currPass == 1){
        printLabelAddressTable(lat);
		fseek(ip, 0, SEEK_SET);
		++currPass;
		return 0;
	}else{
        return 1;
    }
}

int main(int argc, char* argv[]){

	lat = (struct labelAddressTable*)malloc(sizeof(struct labelAddressTable));
	lat->head = NULL;
	
    if(argc > 1) { 
        ip = fopen(argv[1], "r");
        if(ip) yyin = ip;
    }
	fp = fopen("exprnTreeFinal.xsm","w");
	
	yylex();
	
	fclose(ip);
	fclose(fp);
	return 0;
	
}