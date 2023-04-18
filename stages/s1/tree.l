%{
    // #include <stdio.h>
    // #include <stdlib.h>
    #include "y.tab.h"
    // #include "header.h"
%}

%%

[0-9]*      { yylval.integer = atoi (yytext); return NUM; }
"+"         { return ADD; }
"-"         { return SUB; }
"*"         { return MUL; }
"/"         { return DIV; }
[()]        { return *yytext; }
[" " | \t]  {}
[\n]        { return END; }

%%

int yywrap () {
    return 1;
}