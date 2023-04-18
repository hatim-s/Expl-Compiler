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

%token START END NUM ID READ WRITE
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE
%token ADD SUB MUL DIV EQL LT GT EQ GE LE NE ENDSTMT

%type <node> ID NUM
%type <node> expr program stmtlst stmt instmt outstmt assgstmt ifstmt whilestmt breakstmt continuestmt

%left ADD SUB
%left MUL DIV
%left EQL

%%

program : START stmtlst END ENDSTMT
        {
            $$ = $2->left;
            free ($2);

            FILE *outfile = fopen ("code.out", "w");
            
            registerInit ();
            headerGenerator (outfile);
            codeGenerator (outfile, $$);
            fprintf (outfile, "INT 10\n"); 
            
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
        | assgstmt      { $$ = $1; } 
        | ifstmt        { $$ = $1; }
        | whilestmt     { $$ = $1; }
        | breakstmt     { $$ = $1; } 
        | continuestmt  { $$ = $1; };

instmt  : READ '(' ID ')' ENDSTMT       { $$ = makeReadNode ($3); }; 
outstmt : WRITE '(' expr ')' ENDSTMT    { $$ = makeWriteNode ($3); };
assgstmt: ID EQL expr ENDSTMT           { $$ = makeOperatorNode ("=", $1, $3); };

breakstmt       : BREAK ENDSTMT         { $$ = makeBreakNode (); };
continuestmt    : CONTINUE ENDSTMT      { $$ = makeContinueNode (); };

ifstmt  : IF '(' expr ')' THEN stmtlst ELSE stmtlst ENDIF ENDSTMT   { $$ = makeIfElseNode ($3, $6, $8); }
        | IF '(' expr ')' THEN stmtlst ENDIF ENDSTMT                { $$ = makeIfNode ($3, $6); } ;

whilestmt : WHILE '(' expr ')' DO stmtlst ENDWHILE ENDSTMT          { if ($3->vartype != TYPE_BOOL) { printf ("type mismatch\n"); exit (0); } $$ = makeWhileNode ($3, $6); } ;

expr    : expr ADD expr     { $$ = makeOperatorNode ("+", $1, $3); }
        | expr SUB expr     { $$ = makeOperatorNode ("-", $1, $3); }
        | expr MUL expr     { $$ = makeOperatorNode ("*", $1, $3); }
        | expr DIV expr     { $$ = makeOperatorNode ("/", $1, $3); }
        | '(' expr ')'      { $$ = $2; }
        | expr LT expr      { $$ = makeOperatorNode ("<", $1, $3); }
        | expr GT expr      { $$ = makeOperatorNode (">", $1, $3); }
        | expr EQ expr      { $$ = makeOperatorNode ("==", $1, $3); }
        | expr LE expr      { $$ = makeOperatorNode ("<=", $1, $3); }
        | expr GE expr      { $$ = makeOperatorNode (">=", $1, $3); }
        | expr NE expr      { $$ = makeOperatorNode ("!=", $1, $3); }
        | NUM               { $$ = $1; }
        | ID                { $$ = $1; } ;

%%

void yyerror(char const *s) {
    printf("yyerror %s\n",s);
    exit (0);
}

int main (int argc, char const *argv []) {
    if (argc > 1) {
        FILE* inp = fopen (argv[1], "r");
        if (inp) yyin = inp;
    }

    yyparse ();

    return 0;
}