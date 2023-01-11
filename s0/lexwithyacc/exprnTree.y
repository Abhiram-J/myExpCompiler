%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "exprnTree.h"
 #include "exprnTree.c"
 int yylex(void);
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
    printf("Answer : %d\n",evaluate($1));
    exit(1);
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
    return 0;
}


int main(void) {
 yyparse();
 return 0;
}