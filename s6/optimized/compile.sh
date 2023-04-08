#!bin/bash
lex exprnTree.l
yacc -d exprnTree.y
gcc y.tab.c lex.yy.c -o exprnTree.exe
# ./exprnTree.exe progs/linkedList.txt
./exprnTree.exe progs/bst.txt
# ./exprnTree.exe progs/extendedEAusingLL.txt

