/* Auxillary Declarations */

%{
 #include <stdio.h>
 char *file1;
 int lines, chars, words;
%}

/* Regular Declarations */

line   [\n]
char   [ -@]        /* can add more characters */ 
word   [a-z|A-Z]+

/*Rule Section*/

%%

{line}     { lines++; }
{char}     { chars++; }
{word}     { words++; chars += yyleng; }

    
%%
/* Auxillary Functions */

int yywrap() { 
    return 1;
}
 
int main(int argc, char* argv[])
{
    if(argc > 1) { 

        FILE *fp = fopen(argv[1], "r");
        if(fp) yyin = fp;
        file1 = argv[1];
    }
 
    yylex();

    printf("\nLines : %d\n" , lines);
    printf("Characters : %d\n" , chars);
    printf("Words : %d\n" , words);
    return 1;
}
