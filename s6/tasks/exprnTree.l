%{

 #include <stdio.h>
 #include <stdlib.h>
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
"type" {return TYPE;}
"endtype" {return ENDTYPE;}
"main" {return MAIN;}
"int" {return INT;}
"string" {return STR;}
"return" {return RETURN;}
"initialize" {return INITIALIZE;}
"alloc" {return ALLOC;}
"free" {return FREE;}
"null" {return NULLTYPE;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return STAR;}
"/" {return DIV;}
"%" {return MOD;}
"=" {return ASSIGN;}
">" {return GT;}
"<"	{return LT;}
">=" {return GE;}
"<=" {return LE;}
"==" {return EQ;}
"!=" {return NE;}
"&" {return AMP;}
"&&" {return AND;}
"||" {return OR;}
";" {return SEMICOLON;}
{identifier}	{yylval.string = strdup(yytext); return ID;}
{numbers}	{yylval.number = atoi(yytext); return NUM;}
{strings}	{yylval.string = strdup(yytext); return STR;}
[\n \t] {}
[(),\[\]{}.] {return *yytext;}
. {yyerror("unknown character\n");}

%%

int yywrap(void) {
 return 1;
}