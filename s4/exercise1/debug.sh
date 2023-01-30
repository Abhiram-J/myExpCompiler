#!bin/bash
gcc -g lex.yy.c y.tab.c
gdb --args a.out sum.txt