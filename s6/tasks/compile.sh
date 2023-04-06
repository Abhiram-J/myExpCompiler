#!bin/bash
lex exprnTree.l
yacc -d exprnTree.y
gcc y.tab.c lex.yy.c -o exprnTree.exe
./exprnTree.exe progs/extendedEAusingLL.txt
# ./exprnTree.exe progs/bst.txt
