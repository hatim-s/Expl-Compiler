#!/bin/bash
flex analyzer.l
bison -dy -Wno parser.y
gcc -g lex.yy.c y.tab.c -o compiler.exe
./compiler.exe prog.expl
flex linker.l
gcc lex.yy.c -o linker.exe
./linker.exe code-o.xsm code.xsm
