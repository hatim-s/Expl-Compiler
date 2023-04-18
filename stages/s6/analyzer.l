%{
    #include "y.tab.h"
    #include "tree.h"

    void yyerror (const char *);
%}

%%

"begin"     { return START; }
"end"       { return END; }
"read"      { return READ; }
"write"     { return WRITE; }
"alloc"     { return ALLOC; }
"free"      { return FREE; }
"initialize" { return INIT; }
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
"type"      { return TYPE; }
"endtype"   { return ENDTYPE; }
"return"    { return RETURN; }
"int"       { return INT; }
"str"       { return STR; }
"null"      { return NULLL; }
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
"&&"        { return AND; }
"||"        { return OR; }
"~"         { return NOT; }
";"         { return ENDSTMT; }
","         { return *yytext; }
"."         { return *yytext; }
"\""        { return *yytext; }

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