#!/bin/bash
lex lex_prog.l
bison -d -t yacc_prog.y -graph
gcc lex.yy.c yacc_prog.tab.c
./a.out input.txt