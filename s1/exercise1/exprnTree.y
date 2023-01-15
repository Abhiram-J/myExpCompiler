%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "exprnTree.h"
 #include "exprnTree.c"
 int yylex(void);
 extern FILE *yyin;

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
    $$ = $2;
    printf("Expression Value : %d\n",evaluate($1));

    printf("Prefix Expression : ");
    infixtoprefix($1);
    printf("\n");

    printf("Postfix Expression : ");
    infixtopostfix($1);
    printf("\n");
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
    exit(0);
}


int main(int argc, char* argv[]) {
  FILE* fp;
  if(argc > 1) { 
  fp = fopen(argv[1], "r");
  if(fp) yyin = fp;
  }

  yyparse();
  fclose(fp);
  return 0;
}