%{
  #include  <stdio.h>
  #include  <stdlib.h>
  #include  "y.tab.h"
  

%}


%%

[0-9]+ {  
    yylval.integer = atoi(yytext);
    return DIGIT;
}

" "
"\n"    return '\n';
.       return *yytext;


%%

int yywrap() {
    return 1;
}