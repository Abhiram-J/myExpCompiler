/* Auxillary Declarations */

%{
 #include <stdio.h>
 char *file1;
 int ints, floats;
%}

/* Regular Declarations */

int     [0-9]+
float   [0-9]+[.][0-9]+
lineSpace    [\n| ]

/*Rule Section*/

%%

{int}     { ints++; }
{float}     { floats++; }
{lineSpace}      {}

    
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

    printf("\nIntegers : %d\n" , ints);
    printf("Floating Points : %d\n" , floats);
    return 0;
}
