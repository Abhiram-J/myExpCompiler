%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "typeTable.h"
 #include "symbolTable.h"
 #include "exprnTree.h"
 #include "reg.h"
 #include "typeTable.c"
 #include "exprnTree.c"
 #include "symbolTable.c"

 #define newl printf("\n");
 #define pdebug printf("\ndebug\n");
 
 int yylex(void);
 int yyerror(char *s);
 extern FILE* yyin;
 FILE* ip;
 FILE* fp;

 struct globalSymbolTable* gst ;
 struct localSymbolTable* lst ;
 struct typeTable* tt ;

 int flabel = 0;

%}

%union{

    struct treeNode* treeNode;
    struct globalSymbolNode* globalSymbolNode;
    struct localSymbolNode* localSymbolNode;
    struct paramNode* paramNode;
    struct argNode* argNode;
    struct typeNode* typeNode;
    struct fieldNode* fieldNode;
    int number;
    char* string;

}
%type <argNode> ArgList 
%type <string> FName
%type <paramNode> ParamList Param
%type <localSymbolNode> LdeclBlock LdeclList Ldecl LidList Lid FdefBlock Fdef MainHeader MainBlock
%type <globalSymbolNode>  IDDECL GidList Gid Gdecl GdeclList GdeclBlock  program 
%type <treeNode> expr STMT SLIST Field INPUTSTMT  OUTPUTSTMT ASSIGNSTMT IFSTMT WHILESTMT DOWHILESTMT REPEATUNTILSTMT IDENTIFIER ID NUM INITIALIZESTMT ALLOCSTMT FREESTMT
%type <number> Type TypeName
%type <typeNode> TypeDef TypeDefList TypeDefBlock
%type <fieldNode> FieldDeclList FieldDecl
%token ID NUM PLUS MINUS STAR DIV MOD ASSIGN BEG END READ WRITE ELSE SEMICOLON BREAK CONTINUE DECL ENDDECL INT STR AMP MAIN RETURN
%token IF THEN ENDIF WHILE DO ENDWHILE REPEAT NULLTYPE UNTIL TYPE ENDTYPE INITIALIZE ALLOC FREE 

%nonassoc GT GE LT LE EQ NE AND OR
%left PLUS MINUS
%left STAR DIV MOD
/* %left ADDR */

%%
program : TypeDefBlock GdeclBlock FdefBlock MainBlock 
                                {printf("typedef gdecl fdef  main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}

        | TypeDefBlock GdeclBlock MainBlock  {printf("typedef gdecl main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}

        | TypeDefBlock FdefBlock MainBlock   
                                {printf("type function main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}

        | TypeDefBlock MainBlock {printf("type main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
                                    
  	;
    

TypeDefBlock  : TYPE TypeDefList ENDTYPE { 
                                            tt->head = $2;
                                            printTypeTable(tt);
                                            newl;
                                            if ( checkDuplicateType(tt) ) yyerror("duplicate type definition");
                                            $$ = $2;
                                            }
              | TYPE ENDTYPE { yyerror("no type definition");}
              ;

TypeDefList   : TypeDefList TypeDef { joinTypeNode($1,$2); $$ = $1;}
              | TypeDef { $$ = $1;}
              ;

TypeDef       : ID '{' FieldDeclList '}'   { 
                                            if (checkIfValidType(tt,$3,$<string>1)) yyerror("type not defined");
                                            $$ = createTypeNode($<string>1,$3);
                                            }
              ;

FieldDeclList : FieldDeclList FieldDecl { joinFieldNode($1,$2); $$ = $1;}
              | FieldDecl    {$$ = $1;}
              ;

FieldDecl    : TypeName ID SEMICOLON { $$ = createFieldNode($1,$<string>2,NULL); }
             | ID ID SEMICOLON { $$ = createFieldNode(noType,$<string>2,$<string>1); }
             ;

TypeName     : INT      { $$ = intType;}
             | STR      { $$ = strType;}
             ;

GdeclBlock : DECL GdeclList ENDDECL {
                            gst = ( struct globalSymbolTable* ) malloc(sizeof(struct globalSymbolTable));
                            gst->head = $2;
                            assignBindingToGST(gst);
                            printGlobalSymbolTable(gst);
                            newl;
                            printf("globalMemLoc : %d" , globalMemLoc);
                            newl;
                            if ( checkDuplicateforGST($2) ) yyerror("duplicate declaration in gst");
                            fp = fopen("exprnTree.xsm", "w");
                            printHelper(fp,entryCode,-1,-1);
                            
                            while( globalMemLoc-- > 4096){
                                fprintf(fp, "PUSH R0\n");
                            }
                            
                            fprintf(fp, "CALL MAIN\n");
                            printHelper(fp,exitCode,-1,-1);

                           }
    | DECL ENDDECL			{ yyerror("no declaration");}
    ;

GdeclList : GdeclList Gdecl	{ joinGlobalSymbolNode($1,$2); $$ = $1; }
    | Gdecl			{ $$ = $1; }
    ;

Gdecl : Type GidList SEMICOLON	{
                                struct globalSymbolNode* temp = $2;
                                while(temp != NULL){
                                    temp->type = $1;
                                    temp = temp->next;
                                }
                                $$ = $2;
                            }
     | ID GidList SEMICOLON {
                                struct globalSymbolNode* temp = $2;
                                // if entry in typetable for id exists
                                struct typeNode* tNode = getTypeNode(tt,$<string>1);
                                if ( tNode != NULL ){
                                    while(temp != NULL){
                                        temp->typeName = $<string>1;
                                        temp->type = noType;
                                        temp->tNode = tNode;
                                        temp = temp->next;
                                    }
                                }
                                else{
                                    yyerror("no type found for id in gdecl");
                                }
                                $$ = $2;
                            }
        
    ;

Type : INT				{$$ = intType;}
	|  STR				{$$ = strType;}
	;

GidList : GidList ',' Gid  { joinGlobalSymbolNode($1,$3); $$ = $1; }
    | Gid				   { $$ = $1; }
    ;

Gid : IDDECL { $$ = $1; }
    | ID '(' ParamList ')' { $$ = createGlobalSymbolNode($<string>1, noType, -1);
                             $$->paramList = $3;
                             $$->fLabel = flabel++;
                           }
    ;
ParamList : ParamList ',' Param	{ joinParamNode($1,$3); $$ = $1; }
    | Param			{$$ = $1;}
    |				{$$ = NULL;}
    ;

Param : Type ID { $$ = createParamNode($<string>2,$1,NULL); }
      | ID ID { $$ = createParamNode($<string>2,noType,$<string>1); }
      ;

IDDECL  : ID					{ 
								$$ = createGlobalSymbolNode($<string>1,noType,1 );
							   }
		| ID '[' NUM ']'		{
								$$ = createGlobalSymbolNode($<string>1,noType,$<number>3);
							   }
        | STAR ID			{ $$ = createGlobalSymbolNode($<string>2,noType,1);}  
	    ;


FdefBlock : FdefBlock Fdef	{ $$ = $1;}
    | Fdef			{$$ = $1;}
    ;

Fdef : FName '{' LdeclBlock BEG SLIST END '}' {
                            printf("in func");
                            newl;
                            assignLocalBindingtoLST(lst);
                            printLocalSymbolTable(lst);
                            newl;newl;
                            inorder($5);
                            newl;
                           
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");
                            codeGenForLocal($3,fp);
                            codeGen($5,fp);
                            codeDelForLocal($3,fp);
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                           
                            freeLST(lst->head);

                        }
    | FName '{' BEG SLIST END '}' {
                            printf("in func");
                            newl;
                            inorder($4);
                            newl;
                           
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");
                            codeGen($4,fp);
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                           
                            freeLST(lst->head);

                        }
    ;

FName:  Type ID '(' ParamList ')' { 
                                     if( checkFuncDeclaration(gst,$<string>2,$4) ) yyerror("function declaration not found");
                                     lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                     lst->head = NULL;
                                     addParamToLST(lst,$4);
                                     assignBindingToParam(lst);
                                     newl;newl;
                                     printf("in func name");newl;
                                     assignTypeNodetoLST(lst,tt);
                                     printLocalSymbolTable(lst);
                                     pdebug;

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,$2));
                                     $$ = $<string>2;
       
                                  }
    | Type ID '(' ')' {  if( checkFuncDeclaration(gst,$<string>2,NULL) ) yyerror("function declaration not found");
                         lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                         lst->head = NULL;
                         newl;newl;
                         printf("in func name");newl;
                         fprintf(fp, "F%d:\n",getFuncLabel(gst,$2));
                         $$ = $<string>2;
                        }
    | ID ID '(' ParamList ')' { 
                                     if( checkFuncDeclaration(gst,$<string>2,$4) ) yyerror("function declaration not found");
                                     lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                     lst->head = NULL;
                                     addParamToLST(lst,$4);
                                     assignBindingToParam(lst);
                                     newl;newl;
                                     printf("in func name");newl;
                                     assignTypeNodetoLST(lst,tt);
                                     printLocalSymbolTable(lst);

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,$2));
                                     $$ = $<string>2;
       
                                  }
     ;

MainBlock : MainHeader '{' LdeclBlock BEG SLIST END '}' {
                            printf("in main");
                            newl;
                            assignLocalBindingtoLST(lst);
                            printLocalSymbolTable(lst);
                            newl;newl;
                            inorder($5);
                            newl;
                          
                            fprintf(fp, "MAIN:\n");
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            codeGenForLocal($3,fp);
                            codeGen($5,fp);
                            codeDelForLocal($3,fp);

                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            freeLST(lst->head);
                            freeGST(gst->head);
                            
                        }
            | MainHeader '{' BEG SLIST END '}' {
                            printf("in main");
                            newl;
                            inorder($4);
                            newl;newl;

                            fprintf(fp, "MAIN:\n");
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            codeGen($4,fp);

                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            freeLST(lst->head);
                            freeGST(gst->head);

                        }
         
    ;

MainHeader: INT MAIN '(' ')' {
                            newl;printf("in main header");newl;
                            lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                            lst->head = NULL;
                           
                        }
    ;


LdeclBlock : DECL LdeclList ENDDECL 	{joinLocalSymbolTableNode(lst,$2);$$ = $2;}
	| DECL ENDDECL			{$$ = NULL;}
	|				{$$ = NULL;}
	;

LdeclList : LdeclList Ldecl		{ joinLocalSymbolNode($1,$2); $$ = $1; }
	| Ldecl				        {$$ = $1;}
	;
	
Ldecl : Type LidList SEMICOLON		{
                                        struct localSymbolNode* temp = $2;
                                        while(temp!=NULL){
                                            temp->type = $1;
                                            temp = temp->next;
                                        }
                                        $$ = $2;
                                    }
    | ID LidList SEMICOLON		{
                                struct localSymbolNode* temp = $2;
                                // if entry in typetable for id exists
                                struct typeNode* tNode = getTypeNode(tt,$<string>1);
                          
                                if ( tNode != NULL ){
                                    while(temp != NULL){
                                        temp->typeName = $<string>1;
                                        temp->type = noType;
                                        temp->tNode = tNode;
                                        temp = temp->next;
                                    }
                                }
                                else{
                                    yyerror("type not defined from lst");
                                }
                                $$ = $2;
                                }
	;
	
LidList : LidList ',' Lid		{ joinLocalSymbolNode($1,$3); $$ = $1; }
	| Lid				{$$ = $1;}
	;

Lid : ID						{$$ = createLocalSymbolNode($<string>1,noType,1, NULL);}
    | ID '[' NUM ']'			{$$ = createLocalSymbolNode($<string>1,noType,$<number>3, NULL);}
    | STAR ID					{$$ = createLocalSymbolNode($<string>2,intType,1, NULL);}
	;

// add argument list

SLIST: SLIST STMT	{$$ = createTree(noVal, noType, NULL, connectorNode,$1,$2 , NULL);}
	 | STMT			{$$ = $1;}
	 ;

STMT:  INPUTSTMT	{$$ = $1;}
	 | OUTPUTSTMT	{$$ = $1;}
	 | ASSIGNSTMT	{$$ = $1;}
     | IFSTMT       {$$ = $1;}
     | WHILESTMT    {$$ = $1;}
     | DOWHILESTMT  {$$ = $1;}
     | REPEATUNTILSTMT  {$$ = $1;}
     | INITIALIZESTMT  {$$ = $1;}
     | ALLOCSTMT  {$$ = $1;}
     | FREESTMT  {$$ = $1;} 
     | BREAK SEMICOLON   {$$ = createTree(noVal, noType, NULL, breakNode , NULL,NULL, NULL);}
     | CONTINUE SEMICOLON   {$$ = createTree(noVal, noType, NULL, continueNode , NULL,NULL, NULL);}
     | ID '(' ')' SEMICOLON { $$ = createTree(noVal, noType,  $<string>1, funcNode , NULL, NULL , NULL); 
                                if(checkArgList(NULL,$<string>1,gst)) yyerror("argument list not matched");}
     | ID '(' ArgList ')' SEMICOLON { $$ = createTree(noVal, noType,  $<string>1, funcNode , NULL,NULL , $3); 
                                     if(checkArgList($3,$<string>1,gst)) yyerror("argument list not matched");}
                                    
     | RETURN expr SEMICOLON	{$$ = createTree(noVal, noType, NULL, returnNode , $2,NULL, NULL);}
	 ;



INPUTSTMT : READ '(' IDENTIFIER ')' SEMICOLON		{$$ = createTree(noVal, noType, NULL, readNode, $3,NULL, NULL);}
	 ;

OUTPUTSTMT : WRITE '(' expr ')' SEMICOLON	{$$ = createTree(noVal, noType, NULL, writeNode, $3,NULL, NULL);}
	 ;

ASSIGNSTMT : IDENTIFIER ASSIGN expr SEMICOLON	{ $$ = createTree(noVal, noType, NULL, assignNode, $1,$3, NULL);}
            | IDENTIFIER ASSIGN AMP IDENTIFIER SEMICOLON	{  struct treeNode *temp = createTree(noVal, intType, NULL, addressNode, $4,NULL, NULL);
                                                                $$ = createTree(noVal, noType, NULL, assignNode, $1,temp, NULL);
                                                            }
	 ;


IFSTMT   :  IF  '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON { struct treeNode *temp = createTree(noVal, noType, NULL, elseNode, $6,$8, NULL); 
                                                                     $$ = createTree(noVal, noType, NULL, ifNode, $3,temp, NULL);}
         |  IF  '(' expr ')' THEN SLIST ENDIF SEMICOLON { $$ = createTree(noVal, noType, NULL, ifNode , $3,$6, NULL);}
        ;

WHILESTMT :  WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON { $$ = createTree(noVal, noType, NULL, whileNode, $3,$6, NULL);}
         ;
DOWHILESTMT :  DO SLIST WHILE '(' expr ')' SEMICOLON { $$ = createTree(noVal, noType, NULL, doWhileNode, $5,$2, NULL);}
         ;
REPEATUNTILSTMT :  REPEAT SLIST UNTIL '(' expr ')' SEMICOLON { $$ = createTree(noVal, noType, NULL, repeatUntilNode,$5,$2, NULL);}
         ;
INITIALIZESTMT : IDENTIFIER ASSIGN INITIALIZE  '(' ')' SEMICOLON { struct treeNode* temp = createTree(noVal, intType, NULL, initializeNode, NULL,NULL, NULL); $$ = createTree(noVal, noType, NULL, assignNode, $1,temp, NULL);}
        ;
ALLOCSTMT : IDENTIFIER ASSIGN ALLOC  '(' ')' SEMICOLON { struct treeNode* temp = createTree(noVal, intType, NULL, allocNode, NULL,NULL, NULL); $$ = createTree(noVal, noType, NULL, assignNode, $1,temp, NULL);}
        ;
FREESTMT : IDENTIFIER ASSIGN FREE '(' IDENTIFIER ')' SEMICOLON { $$ = createTree(noVal, intType, NULL, freeNode, $5,NULL, NULL);}
        ;

expr : expr PLUS expr		{$$ = createTree(noVal, intType, NULL, plusNode, $1,$3, NULL);}
	 | expr MINUS expr  	{$$ = createTree(noVal, intType, NULL, minusNode,$1,$3, NULL);}
	 | expr STAR expr	{$$ = createTree(noVal, intType, NULL, mulNode,$1,$3, NULL);}
	 | expr DIV expr	{$$ = createTree(noVal, intType, NULL, divNode,$1,$3, NULL);}
     | expr MOD expr	{$$ = createTree(noVal, intType, NULL, modNode,$1,$3, NULL);}
	 | expr GT expr	    {$$ = createTree(noVal, boolType, NULL, gtNode,$1,$3, NULL);}
	 | expr GE expr	    {$$ = createTree(noVal, boolType, NULL, geNode,$1,$3, NULL);}
	 | expr LT expr	    {$$ = createTree(noVal, boolType, NULL, ltNode,$1,$3, NULL);}
	 | expr LE expr	    {$$ = createTree(noVal, boolType, NULL, leNode,$1,$3, NULL);}
	 | expr EQ expr	    {$$ = createTree(noVal, boolType, NULL, eqNode,$1,$3, NULL);}
	 | expr NE expr	    {$$ = createTree(noVal, boolType, NULL, neNode,$1,$3, NULL);}
     | expr AND expr	{$$ = createTree(noVal, boolType, NULL, andNode,$1,$3, NULL);}
     | expr OR expr	    {$$ = createTree(noVal, boolType, NULL, orNode,$1,$3, NULL);}
     | '(' expr ')'		{$$ = $2;}
	 | NUM			    {$$ = createTree($<number>1, intType, NULL, numNode, NULL,NULL, NULL);}
     | STR              {$$ = createTree(noVal, strType, $<string>1, strNode, NULL,NULL, NULL);}
     | ID '(' ')'       {  struct treeNode* temp = createTree(noVal, noType, $<string>1, funcNode , NULL,NULL, NULL);
                            findType(gst,lst,temp);
                            temp->val = getFuncLabel(gst,$<string>1);
                            if(checkArgList(NULL,$<string>1,gst)) yyerror("argument list not matched");
                            $$ = temp;}
     | ID '(' ArgList ')'   {  struct treeNode* temp = createTree(noVal, noType, $<string>1, funcNode , NULL ,NULL ,$3);
                          
                            findType(gst,lst,temp);
                             printf("%d ", temp->nodetype);
                            temp->val = getFuncLabel(gst,$<string>1);
                            if(checkArgList($3,$<string>1,gst)) yyerror("argument list not matched");
                            $$ = temp;
                            }
     | NULLTYPE   { $$ = createTree(noVal, nullType, NULL, nullNode, NULL,NULL, NULL);}
	 | IDENTIFIER		{$$ = $1;}
	 ;

ArgList : ArgList ',' expr	{   struct argNode* temp = createArgNode($3); joinArgNode($1,temp); $$ = $1;  } 
                               
    | expr			{     struct argNode* temp  = createArgNode($1); $$ = temp; }
    ;

IDENTIFIER : ID                     { struct treeNode* temp = createTree(noVal, noType, $<string>1, idNode , NULL,NULL, NULL);
                                    findType(gst,lst,temp);
                                    $$ = temp;}

            | ID '[' expr ']'       {  
                                    struct treeNode* temp = createTree(noVal, noType, $<string>1, idNode, $3,NULL, NULL);
                                    findType(gst,lst,temp);
                                    if ( temp->localSymbolTableEntry != NULL && temp->localSymbolTableEntry->size <= evaluate($3)) yyerror("Array index out of bounds");
                                    if ( temp->localSymbolTableEntry == NULL && temp->globalSymbolTableEntry->size <= evaluate($3)) yyerror("Array index out of bounds");
                                    $$ = temp;}

            | STAR ID                { 
                                        struct treeNode* id = createTree(noVal, noType, $<string>2, idNode, NULL,NULL,NULL);
                                        findType(gst,lst,id);
                                        struct treeNode* pointer = createTree(noVal, id->type, NULL, pointerNode, id,NULL,NULL);
                                        $$ = pointer;
                                     } 
            | Field          {  findTypeofTypeNode(tt,gst,lst,$1);assignlocalSymbolTableEntry(gst,lst,$1);$$ = $1;}
            ;

Field     :   Field '.' ID    {  struct treeNode* temp = createTree(noVal, noType, $<string>3, tipeNode , NULL,NULL, NULL);
                                 struct treeNode* temp1 = $1;
                                 while (temp1->left != NULL) temp1 = temp1->left;
                                 temp1->left = temp;
                                $$ = $1;
                              }

            | ID '.' ID       { struct treeNode* temp = createTree(noVal, noType, $<string>3, tipeNode , NULL,NULL, NULL);
                                $$ = createTree(noVal, noType, $<string>1, tipeNode , temp,NULL, NULL);
                            }
            ;


%%

int yyerror(char*s)
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
  tt = (struct typeTable*) malloc(sizeof(struct typeTable));
  tt->head = NULL;
  yyparse();
  return 0;
}

                  