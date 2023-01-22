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
%type <node> expr STMT SLIST INPUTSTMT OUTPUTSTMT program ASSIGNSTMT IFSTMT WHILESTMT ID NUM
%token ID NUM PLUS MINUS MUL DIV ASSIGN BEG END READ WRITE ELSE SEMICOLON
%token IF THEN ENDIF WHILE DO ENDWHILE
%token GT GE LT LE EQ NE

%left GT GE LT LE EQ NE
%left PLUS MINUS
%left MUL DIV

%%

program : BEG SLIST END SEMICOLON{
                            inorder($2);
                            printf("\n");
                            // FILE *fp = fopen("exprnTree.xsm", "w");
                            $$ = $2;
                            // printHelper(fp,entryCode,-1,-1);
                            // codeGen($2,fp);
                            // printHelper(fp,exitCode,-1,-1);
                            evaluate($2);
                            // fclose(fp);
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
     | IFSTMT       {$$ = $1;}
     | WHILESTMT    {$$ = $1;}
	 ;

INPUTSTMT : READ '(' ID ')' SEMICOLON		{$$ = createTree(noVal, noType, NULL, readNode,$3,NULL);}
	 ;

OUTPUTSTMT : WRITE '(' expr ')' SEMICOLON	{$$ = createTree(noVal, noType, NULL, writeNode,$3,NULL);}
	 ;

ASSIGNSTMT : ID ASSIGN expr SEMICOLON	{$$ = createTree(noVal, noType, NULL, assignNode,$1,$3);}
	 ;


IFSTMT   :  IF  '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON { struct node *temp = createTree(noVal, noType, NULL, elseNode,$6,$8); 
                                                                     $$ = createTree(noVal, noType, NULL, ifNode,$3,temp);}
         |  IF  '(' expr ')' THEN SLIST ENDIF SEMICOLON { $$ = createTree(noVal, noType, NULL, ifNode,$3,$6);}
        ;

WHILESTMT :  WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON { $$ = createTree(noVal, noType, NULL, whileNode,$3,$6);}
         ;

expr : expr PLUS expr		{$$ = createTree(noVal, intType, NULL, plusNode,$1,$3);}
	 | expr MINUS expr  	{$$ = createTree(noVal, intType, NULL, minusNode,$1,$3);}
	 | expr MUL expr	{$$ = createTree(noVal, intType, NULL, mulNode,$1,$3);}
	 | expr DIV expr	{$$ = createTree(noVal, intType, NULL, divNode,$1,$3);}
	 | expr GT expr	    {$$ = createTree(noVal, boolType, NULL, gtNode,$1,$3);}
	 | expr GE expr	    {$$ = createTree(noVal, boolType, NULL, geNode,$1,$3);}
	 | expr LT expr	    {$$ = createTree(noVal, boolType, NULL, ltNode,$1,$3);}
	 | expr LE expr	    {$$ = createTree(noVal, boolType, NULL, leNode,$1,$3);}
	 | expr EQ expr	    {$$ = createTree(noVal, boolType, NULL, eqNode,$1,$3);}
	 | expr NE expr	    {$$ = createTree(noVal, boolType, NULL, neNode,$1,$3);}
     | '(' expr ')'		{$$ = $2;}
	 | ID			    {$$ = $1;}
	 | NUM			    {$$ = $1;}
	 ;


%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    fclose(ip);
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