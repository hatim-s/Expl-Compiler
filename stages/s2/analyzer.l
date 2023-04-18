%{
    #include "y.tab.h"
    #include "tree.h"
    // #include "codegen.h"

    void yyerror (const char *);
%}

%%

"begin"     { return START; }
"end"       { return END; }
"read"      { return READ; }
"write"     { return WRITE; }
[0-9]+      { yylval.node = makeNumberNode (atoi(yytext)); return NUM; }
[a-z]       { yylval.node = makeVariableNode (yytext); return ID; }
"+"         { return ADD; }
"-"         { return SUB; }
"*"         { return MUL; }
"/"         { return DIV; }
"="         { return EQL; }
";"         { return ENDSTMT; }
[()]        { return *yytext; }
[ /n/t]     {}
.           { yyerror ("illegal symbol\n"); }

%%

int yywrap () {
    return 1;
}