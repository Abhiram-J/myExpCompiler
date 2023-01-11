/*** Auxiliary declarations section ***/

%{

#include <stdio.h>
#include <stdlib.h>

/* Custom function declaration*/

// Global Declarations

%}

 /*** YACC Declarations section ***/
%token ALPHA
%token ALPHANUM
%left ALPHA
%left ALPHANUM

%%

/*** Rules Section ***/

start : expra '\n'  {printf("\nComplete\n");exit(0);}
 ;

expra:  expra expran  {}
 | expra expra  {}
 | ALPHA   {}
 ;

expran : expran expra {}
    | expran expran {}
    | ALPHANUM {}
    ;

%%

/*** Auxiliary functions section ***/

int isalpha(int c){
    return (c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z' ) ;
}

int yyerror()
{
 printf("Error\n");
 return 0;
}

int yylex()
{
 int c;
 c = getchar();
 if(isalpha(c))
 {
  /* yylval = c - '0'; */
  return ALPHA;

 }else if ( isalpha(c) || (c>= '0' && c <= '9')){
    return ALPHANUM;
 }else{
 return c;
 }
}

int main()
{
 yyparse();
 return 0;
}