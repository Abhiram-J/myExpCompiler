#!bin/bash
lex labelTranslator.l
gcc lex.yy.c -o translator.exe
./translator.exe exprnTree.xsm