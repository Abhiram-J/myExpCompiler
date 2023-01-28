%{

 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "exprnTree.h"


%}

identifier ([a-zA-Z]|_[a-zA-Z])[a-zA-Z0-9_]*
strings \"((\\\")|[^"])*\"
numbers [0-9]+

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
"decl" {return DECL;}
"enddecl" {return ENDDECL;}
"int" {return INT;}
"string" {return STR;}
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
{identifier}	{yylval.string = strdup(yytext); return ID;}
{numbers}	{yylval.number = atoi(yytext); return NUM;}
{strings}	{yylval.string = strdup(yytext); return STR;}
[\n \t] {}
[(),\[\]] {return *yytext;}
. {yyerror("unknown character\n");}

%%

int yywrap(void) {
 return 1;
}