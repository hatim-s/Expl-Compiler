%{
    #include "tree.c"
    #include "codegen.c"
    
    int yylex(void);
    void yyerror (char const *s);
    extern FILE* yyin;
%}

%union {
    struct treenode *node;
};

%token NUM ADD SUB MUL DIV EQL START END ID READ WRITE ENDSTMT

%type <node> ID NUM
%type <node> expr program stmtlst stmt instmt outstmt assgstmt

%left ADD SUB
%left MUL DIV
%left EQL

%%

program : START stmtlst END ENDSTMT
        {
            $$ = $2->left;
            free ($2);

            FILE *outfile = fopen ("code.xsm", "w");
            
            registerInit ();
            headerGenerator (outfile);
            codeGenerator (outfile, $$);
            
            fclose (outfile);
            
            return 0;
        } ;

stmtlst : stmtlst stmt  { 
                            $1->right = $2;
                            $$ = makeConnectorNode ($1, NULL); 
                        }
        | stmt          { $$ = makeConnectorNode ($1, NULL); } ;

stmt    : outstmt       { $$ = $1; } 
        | instmt        { $$ = $1; }
        | assgstmt      { $$ = $1; } ;

instmt  : READ '(' ID ')' ENDSTMT       { $$ = makeReadNode ($3); }; 
outstmt : WRITE '(' expr ')' ENDSTMT    { $$ = makeWriteNode ($3); };
assgstmt: ID EQL expr ENDSTMT           { $$ = makeOperatorNode ("=", $1, $3); };

expr    : expr ADD expr     { $$ = makeOperatorNode ("+", $1, $3); }
        | expr SUB expr     { $$ = makeOperatorNode ("-", $1, $3); }
        | expr MUL expr     { $$ = makeOperatorNode ("*", $1, $3); }
        | expr DIV expr     { $$ = makeOperatorNode ("/", $1, $3); }
        | '(' expr ')'      { $$ = $2; }
        | NUM               { $$ = $1; }
        | ID                { $$ = $1; } ;

%%

void yyerror(char const *s) {
    printf("yyerror %s",s);
    exit (0);
}

int main () {
    FILE* inp = fopen ("prog.expl", "r");
    if (inp) yyin = inp;

    yyparse ();

    return 0;
}