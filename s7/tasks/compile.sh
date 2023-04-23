#!bin/bash
lex exprnTree.l
yacc -d exprnTree.y
gcc y.tab.c lex.yy.c -o exprnTree.exe
# ./exprnTree.exe s6/progs/linkedList.txt
# ./exprnTree.exe s6/progs/bst.txt
# ./exprnTree.exe s6/progs/extendedEAusingLL.txt
# ./exprnTree.exe progs/sofUsingClasses.txt
# ./exprnTree.exe progs/llUsingClasses.txt
# ./exprnTree.exe progs/bstUsingClasses.txt




