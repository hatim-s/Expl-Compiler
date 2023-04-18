%{
    // #include "y.tab.c"
    #include "y.tab.h"
    // #include "headers.h"
    // #include "codegen.h"
    // #include "header.h"
    #include "tree.h"

    void yyerror (const char *);
%}

%%

"begin"     { return START; }
"end"       { return END; }
"read"      { return READ; }
"write"     { return WRITE; }
"if"        { return IF; }
"then"      { return THEN; }
"else"      { return ELSE; }
"endif"     { return ENDIF; }
"while"     { return WHILE; }
"do"        { return DO; }
"endwhile"  { return ENDWHILE; }
"break"     { return BREAK; }
"continue"  { return CONTINUE; }
"decl"      { return DECL; }
"enddecl"   { return ENDDECL; }
"return"    { return RETURN; }
"int"       { return INT; }
"str"       { return STR; }
"main"      { return MAIN; }

"+"         { return ADD; }
"-"         { return SUB; }
"*"         { return MUL; }
"/"         { return DIV; }
"="         { return EQL; }
"<"         { return LT; }
">"         { return GT; }
"<="        { return LE; }
">="        { return GE; }
"=="        { return EQ; }
"!="        { return NE; }
";"         { return ENDSTMT; }
","         { return *yytext; }

[0-9]+                  { yylval.node = makeNumberNode (atoi(yytext)); return NUM; }
[a-zA-Z][a-zA-Z0-9]*    { yylval.node = makeVariableNode (yytext); return ID; }

[()\[\]]    { return *yytext; }
[\{\}]      { return *yytext; }
[ \n\t]     {}

.           { yyerror ("illegal symbol"); }

%%

int yywrap () {
    return 1;
}