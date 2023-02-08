%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "exprnTree.h"
 #include "symbolTable.h"
 #include "reg.h"
 #include "exprnTree.c"
 #include "symbolTable.c"
 
 int yylex(void);
 extern FILE* yyin;
 FILE* ip;

 struct symbolTable* gst;
%}

%union{
    struct treeNode* treeNode;
    struct symbolNode* symbolNode;
    int number;
    char* string;

}
%type <symbolNode> DLIST DSTMT VARLIST IDDECL
%type <treeNode> expr STMT SLIST DECLARATIONS INPUTSTMT OUTPUTSTMT program ASSIGNSTMT IFSTMT WHILESTMT DOWHILESTMT REPEATUNTILSTMT IDENTIFIER ID NUM 
%type <number> TYPE
%token ID NUM PLUS MINUS STAR DIV MOD ASSIGN BEG END READ WRITE ELSE SEMICOLON BREAK CONTINUE DECL ENDDECL INT STR AMP
%token IF THEN ENDIF WHILE DO ENDWHILE REPEAT UNTIL
%token GT GE LT LE EQ NE

%nonassoc GT GE LT LE EQ NE
%left PLUS MINUS
%left ADDR

%%

program : BEG DECLARATIONS SLIST END SEMICOLON{
                            $$ = $3;
                            inorder($3);
                            printf("\n");
                            FILE *fp = fopen("exprnTree.xsm", "w");
                            printHelper(fp,entryCode,-1,-1);
                            codeGen($3,fp);
                            printHelper(fp,exitCode,-1,-1);
                            freeGST(gst->head);
                            freeTree($3);
                            fclose(fp);
                            fclose(ip);
                            exit(0);
			              };
        | BEG DECLARATIONS END SEMICOLON  {
                            freeGST(gst->head);
                            fclose(ip);
				            exit(0);
			              };
	    | BEG END SEMICOLON  {
                            fclose(ip);
				            exit(0);
			              };

DECLARATIONS : DECL DLIST ENDDECL 	{
						gst = (struct symbolTable* ) malloc(sizeof(struct symbolTable));
                        gst->head = $2;
                        assignBinding(gst);
                        printSymbolTable(gst);
					}
	| DECL ENDDECL			{}
	;

DLIST : DLIST DSTMT			{ joinNode($1,$2);$$ = $1;}
	| DSTMT			        {$$ = $1;}
	;
	
DSTMT : TYPE VARLIST SEMICOLON		{
                                        struct symbolNode* temp = $2;
                                        while(temp!=NULL){
                                            if ( temp->type == noType) temp->type = $1;
                                            temp = temp->next;
                                        }
                                        $$ = $2;
                                    }
	 ;
	
TYPE : INT				{$$ = intType;}
	| STR				{$$ = strType;}
	;
	
VARLIST : VARLIST ',' IDDECL	{ joinNode($1,$3); $$ = $1;}
                                         
	   | IDDECL		{$$ = $1;}
	    ;


IDDECL  : ID					{  // add duplicate check
								$$ = createSymbolNode($<string>1,noType,1 , 0);
							}
		| ID '[' NUM ']'		{
								$$ = createSymbolNode($<string>1,noType,$<number>3 , $<number>3);

							}
		| ID '[' NUM ']' '[' NUM ']'	{

								$$ = createSymbolNode($<string>1,noType,$<number>3 * $<number>6 , $<number>3);

							}
        | STAR ID			{ $$ = createSymbolNode($<string>2,intType,1 , 0);}
		;
	
SLIST: SLIST STMT	{$$ = createTree(noVal, noType, NULL, connectorNode,$1,$2);}
	 | STMT			{$$ = $1;}
	 ;
STMT:  INPUTSTMT	{$$ = $1;}
	 | OUTPUTSTMT	{$$ = $1;}
	 | ASSIGNSTMT	{$$ = $1;}
     | IFSTMT       {$$ = $1;}
     | WHILESTMT    {$$ = $1;}
     | DOWHILESTMT  {$$ = $1;}
     | REPEATUNTILSTMT  {$$ = $1;}
     | BREAK SEMICOLON   {$$ = createTree(noVal, noType, NULL, breakNode , NULL,NULL);}
     | CONTINUE SEMICOLON   {$$ = createTree(noVal, noType, NULL, continueNode , NULL,NULL);}
	 ;

INPUTSTMT : READ '(' IDENTIFIER ')' SEMICOLON		{$$ = createTree(noVal, noType, NULL, readNode, $3,NULL);}
	 ;

OUTPUTSTMT : WRITE '(' expr ')' SEMICOLON	{$$ = createTree(noVal, noType, NULL, writeNode, $3,NULL);}
	 ;

ASSIGNSTMT : IDENTIFIER ASSIGN expr SEMICOLON	{$$ = createTree(noVal, noType, NULL, assignNode, $1,$3);}
            | IDENTIFIER ASSIGN AMP IDENTIFIER SEMICOLON	{  struct treeNode *temp = createTree(noVal, intType, NULL, addressNode, $4,NULL);
                                                                $$ = createTree(noVal, noType, NULL, assignNode, $1,temp);
                                                            }
	 ;


IFSTMT   :  IF  '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON { struct treeNode *temp = createTree(noVal, noType, NULL, elseNode, $6,$8); 
                                                                     $$ = createTree(noVal, noType, NULL, ifNode, $3,temp);}
         |  IF  '(' expr ')' THEN SLIST ENDIF SEMICOLON { $$ = createTree(noVal, noType, NULL, ifNode , $3,$6);}
        ;

WHILESTMT :  WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON { $$ = createTree(noVal, noType, NULL, whileNode, $3,$6);}
         ;
DOWHILESTMT :  DO SLIST WHILE '(' expr ')' SEMICOLON { $$ = createTree(noVal, noType, NULL, doWhileNode, $5,$2);}
         ;
REPEATUNTILSTMT :  REPEAT SLIST UNTIL '(' expr ')' SEMICOLON { $$ = createTree(noVal, noType, NULL, repeatUntilNode,$5,$2);}
         ;

expr : expr PLUS expr		{$$ = createTree(noVal, intType, NULL, plusNode, $1,$3);}
	 | expr MINUS expr  	{$$ = createTree(noVal, intType, NULL, minusNode,$1,$3);}
	 | expr STAR expr	{$$ = createTree(noVal, intType, NULL, mulNode,$1,$3);}
	 | expr DIV expr	{$$ = createTree(noVal, intType, NULL, divNode,$1,$3);}
     | expr MOD expr	{$$ = createTree(noVal, intType, NULL, modNode,$1,$3);}
	 | expr GT expr	    {$$ = createTree(noVal, boolType, NULL, gtNode,$1,$3);}
	 | expr GE expr	    {$$ = createTree(noVal, boolType, NULL, geNode,$1,$3);}
	 | expr LT expr	    {$$ = createTree(noVal, boolType, NULL, ltNode,$1,$3);}
	 | expr LE expr	    {$$ = createTree(noVal, boolType, NULL, leNode,$1,$3);}
	 | expr EQ expr	    {$$ = createTree(noVal, boolType, NULL, eqNode,$1,$3);}
	 | expr NE expr	    {$$ = createTree(noVal, boolType, NULL, neNode,$1,$3);}
     | '(' expr ')'		{$$ = $2;}
	 | IDENTIFIER		{$$ = $1;}
	 | NUM			    {$$ = createTree($<number>1, intType, NULL, numNode, NULL,NULL);}
     | STR              {$$ = createTree(noVal, strType, $<string>1, strNode, NULL,NULL);}
	 ;

IDENTIFIER : ID                     { struct treeNode* temp = createTree(noVal, noType, $<string>1, idNode , NULL,NULL);
                                    findType(gst,temp);$$ = temp;}
            | ID '[' expr ']'       {  
                                    struct treeNode* temp = createTree(noVal, noType, $<string>1, idNode, $3,NULL);
                                    findType(gst,temp);
                                    if ( temp->symbolTableEntry->length <= evaluate($3)) yyerror("Array index out of bounds");
                                    $$ = temp;}
            | ID '[' expr ']' '[' expr ']'  { struct treeNode* temp = createTree(noVal, noType, $<string>1, idNode, $3,$6);
                                            findType(gst,temp);
                                            int x = evaluate($3) , y = evaluate($6);
                                            if ( temp->symbolTableEntry->length <= evaluate($3) || (temp->symbolTableEntry->size)/(temp->symbolTableEntry->length) <= evaluate($6)) yyerror("Array index out of bounds"); // need to check for out of bounds
                                           
                                            $$ = temp;}
            | STAR ID                { 
                                        struct treeNode* id = createTree(noVal, noType, $<string>2, idNode, NULL,NULL);
                                        findType(gst,id);
                                        struct treeNode* pointer = createTree(noVal, id->type, NULL, pointerNode, id,NULL);
                                        // printf("id type is %d",pointer->type);
                                        $$ = pointer;
                                     }
            ;


%%

int yyerror(char const *s)
{
    printf("yyerror : %s\n",s);
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