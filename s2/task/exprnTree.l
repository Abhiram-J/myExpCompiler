%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "exprnTree.h"

 int number;

%}

%%

"begin" {return BEG;}
"end" {return END;}
"read" {return READ;}
"write" {return WRITE;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"=" {return ASSIGN;}
[a-z] {yylval.node = createTree(noVal, intType, yytext, idNode, NULL, NULL);return ID;}
[0-9]+ {number = atoi(yytext); yylval.node = createTree(number, intType, NULL, numNode, NULL, NULL); return NUM;}
[\n \t] {}
[()] {return *yytext;}
[;] {return SEMICOLON;}
. { yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
 return 1;
}