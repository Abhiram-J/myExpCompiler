%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "exprnTree.h"
 #include "reg.h"
 #include "exprnTree.c"
 int yylex(void);
 extern FILE* yyin;
 FILE* ip;

%}

%union{
    struct node *node;

}
%type <node> expr STMT SLIST INPUTSTMT OUTPUTSTMT program ID NUM ASSIGNSTMT
%token READ WRITE NUM ID ASSIGN PLUS MINUS MUL DIV BEG SEMICOLON END
%left PLUS MINUS
%left MUL DIV

%%

program : BEG SLIST END SEMICOLON{
                            // inorder($2);
                            // printf("\n");
                            $$ = $2;
                            evaluate($2);
                            fclose(ip);
                            exit(0);
			              };
	    | BEG END SEMICOLON  {
                            fclose(ip);
				            exit(0);
			              };


SLIST: SLIST STMT	{$$ = createTree(noVal, noType, NULL, connectorNode,$1,$2);}
	 | STMT			{$$ = $1;}
	 ;
STMT:  INPUTSTMT	{$$ = $1;}
	 | OUTPUTSTMT	{$$ = $1;}
	 | ASSIGNSTMT	{$$ = $1;}
	 ;

INPUTSTMT : READ '(' ID ')' SEMICOLON		{$$ = createTree(noVal, noType, NULL, readNode,$3,NULL);}
	 ;

OUTPUTSTMT : WRITE '(' expr ')' SEMICOLON	{$$ = createTree(noVal, noType, NULL, writeNode,$3,NULL);}
	 ;

ASSIGNSTMT : ID ASSIGN expr SEMICOLON	{$$ = createTree(noVal, noType, NULL, assignNode,$1,$3);}
	 ;

expr : expr PLUS expr		{$$ = createTree(noVal, noType, NULL, plusNode,$1,$3);}
	 | expr MINUS expr  	{$$ = createTree(noVal, noType, NULL, minusNode,$1,$3);}
	 | expr MUL expr	{$$ = createTree(noVal, noType, NULL, mulNode,$1,$3);}
	 | expr DIV expr	{$$ = createTree(noVal, noType, NULL, divNode,$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | ID			{$$ = $1;}
	 | NUM			{$$ = $1;}
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