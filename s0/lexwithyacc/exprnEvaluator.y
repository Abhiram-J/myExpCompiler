%{
  #include <stdio.h>
%}

%union{
    int integer;
}


%type <integer> expr DIGIT
%token DIGIT 



%left '+' '-'
%left '*' '/'

%%

start : expr '\n'  { 
    printf("Expression value = %d\n",$1);
    exit(1);
    }
    ;

expr :  expr '+' expr  {$$ = $1 + $3;}
 | expr '*' expr  {$$ = $1 * $3;}
 | expr '-' expr  {$$ = $1 - $3;}
 | expr '/' expr  {$$ = $1 / $3;}
 | '(' expr ')'   {$$ = $2;}
 | DIGIT   {$$ = $1;}
 ;

%%

void yyerror()
{
    printf("Please enter a valid expression !!!\n");
}

int main()
{
  yyparse();
  return 1;
}