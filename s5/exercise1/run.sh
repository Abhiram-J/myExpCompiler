#!bin/bash
./exprnTree.exe $1
lex labelTranslator.l
gcc lex.yy.c -o translator.exe
./translator.exe exprnTree.xsm
cp exprnTreeFinal.xsm ../../xsm_expl/main.xsm
cd ../../xsm_expl
./xsm -l library.lib -e main.xsm 
