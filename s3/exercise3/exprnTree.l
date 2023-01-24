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
"if" {return IF;}
"then" {return THEN;}
"else" {return ELSE;}
"endif" {return ENDIF;}
"while" {return WHILE;}
"do" {return DO;}
"endwhile" {return ENDWHILE;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"repeat" {return REPEAT;}
"until" {return UNTIL;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"=" {return ASSIGN;}
">" {return GT;}
"<"	{return LT;}
">=" {return GE;}
"<=" {return LE;}
"==" {return EQ;}
"!=" {return NE;}
";" {return SEMICOLON;}
[a-z] {yylval.node = createTree(noVal, intType, yytext, idNode, NULL, NULL); return ID;}
[0-9]+ {number = atoi(yytext); yylval.node = createTree(number, intType, NULL, numNode, NULL, NULL); return NUM;}
[\n \t] {}
[()] {return *yytext;}
. { yyerror("unknown character\n");}

%%

int yywrap(void) {
 return 1;
}