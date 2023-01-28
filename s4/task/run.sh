#!bin/bash
lex exprnTree.l
yacc -d exprnTree.y
gcc y.tab.c lex.yy.c -o exprnTree.exe
clear
./exprnTree.exe sum.txt
lex labelTranslator.l
gcc lex.yy.c -o translator.exe
./translator.exe exprnTree.xsm
cp exprnTreeFinal.xsm xsm_expl/main.xsm
cd xsm_expl
./xsm -l library.lib -e main.xsm 