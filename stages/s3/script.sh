#!/bin/bash
bison -dy -Wno parser.y
flex analyzer.l
gcc lex.yy.c y.tab.c -o compiler.exe
./compiler.exe prog.expl
flex linker.l
gcc lex.yy.c -o linker.exe
./linker.exe code.out code.xsm
