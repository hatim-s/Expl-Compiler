%{
    #include "tree.c"
    #include "codegen.c"
    
    int yylex(void);
    void yyerror (char const *s);
    
    extern FILE* yyin;
    extern char* yytext;
%}

%union {
    struct treenode *node;
};

%token START END NUM ID READ WRITE
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE
%token ADD SUB MUL DIV EQL LT GT EQ GE LE NE ENDSTMT
%token DECL ENDDECL INT STR

%type <node> ID NUM
%type <node> program declarations stmtlst  
%type <node> decllist decl type varlist identifierDecl
%type <node> stmt instmt outstmt assgstmt ifstmt whilestmt breakstmt continuestmt
%type <node> expr identifier 

%left ADD SUB
%left MUL DIV
%left EQL

%%

program : declarations START stmtlst END ENDSTMT
        {
            $$ = $3->left;
            free ($3);

            FILE *outfile = fopen ("code.out", "w");
            
            registerInit ();
            headerGenerator (outfile);
            codeGenerator (outfile, $$);
            fprintf (outfile, "INT 10\n"); 
            
            fclose (outfile);
            
            return 0;
        } ;

declarations    : DECL decllist ENDDECL ENDSTMT { initializeTable (); declareVariables ($2); printTable (); }
                | DECL ENDDECL ENDSTMT          {} ;

decllist        : decllist decl { $1->right = $2; $$ = makeConnectorNode ($1, NULL); } 
                | decl          { $$ = makeConnectorNode ($1, NULL); } ;

decl            : type varlist ENDSTMT { $$ = makeDeclarationNode ($1, $2); };

type            : INT   { $$ = makeTypeNode (TYPE_INT); } 
                | STR   { $$ = makeTypeNode (TYPE_STR); } ;

varlist         : varlist ',' identifierDecl    { $1->right = $3; $$ = makeConnectorNode ($1, NULL); } 
                | identifierDecl                { $$ = makeConnectorNode ($1, NULL); } ;

identifierDecl  : ID '[' NUM ']'    { $$ = makeArrayNodeDecl ($1->varname, $3->varvalue); }
                | ID                { $$ = $1; } ;     

stmtlst : stmtlst stmt  { $1->right = $2; $$ = makeConnectorNode ($1, NULL); }
        | stmt          { $$ = makeConnectorNode ($1, NULL); } ;

stmt    : outstmt       { $$ = $1; } 
        | instmt        { $$ = $1; } 
        | assgstmt      { $$ = $1; } 
        | ifstmt        { $$ = $1; } 
        | whilestmt     { $$ = $1; } 
        | breakstmt     { $$ = $1; } 
        | continuestmt  { $$ = $1; };

instmt      : READ '(' identifier ')' ENDSTMT   { $3->vartype = getVariableType ($3->varname); $$ = makeReadNode ($3); }; 
outstmt     : WRITE '(' expr ')' ENDSTMT        { $$ = makeWriteNode ($3); };
assgstmt    : identifier EQL expr ENDSTMT       { $1->vartype = getVariableType ($1->varname); $$ = makeOperatorNode ("=", $1, $3); };

breakstmt       : BREAK ENDSTMT         { $$ = makeBreakNode (); };
continuestmt    : CONTINUE ENDSTMT      { $$ = makeContinueNode (); };

ifstmt  : IF '(' expr ')' THEN stmtlst ELSE stmtlst ENDIF ENDSTMT   { $$ = makeIfElseNode ($3, $6, $8); }
        | IF '(' expr ')' THEN stmtlst ENDIF ENDSTMT                { $$ = makeIfNode ($3, $6); } ;

whilestmt : WHILE '(' expr ')' DO stmtlst ENDWHILE ENDSTMT          { $$ = makeWhileNode ($3, $6); } ;

expr    : expr ADD expr     { $$ = makeOperatorNode ("+", $1, $3); }
        | expr SUB expr     { $$ = makeOperatorNode ("-", $1, $3); }
        | expr MUL expr     { $$ = makeOperatorNode ("*", $1, $3); }
        | expr DIV expr     { $$ = makeOperatorNode ("/", $1, $3); }
        | expr LT expr      { $$ = makeOperatorNode ("<", $1, $3); }
        | expr GT expr      { $$ = makeOperatorNode (">", $1, $3); }
        | expr EQ expr      { $$ = makeOperatorNode ("==", $1, $3); }
        | expr LE expr      { $$ = makeOperatorNode ("<=", $1, $3); }
        | expr GE expr      { $$ = makeOperatorNode (">=", $1, $3); }
        | expr NE expr      { $$ = makeOperatorNode ("!=", $1, $3); }
        | '(' expr ')'      { $$ = $2; }
        | identifier        { $1->vartype = getVariableType ($1->varname); $$ = $1; } ;
        | NUM               { $$ = $1; }

identifier  : ID '[' expr ']'       { if (getVariableSize ($1->varname) == 0) { printf ("error: variable is not array type\n"); exit (0); } $$ = makeArrayNode ($1->varname, $3); }
            | ID                    { if (getVariableSize ($1->varname) != 0) { printf ("error: variable is array type\n"); exit (0); } $$ = $1; } ;

%%

void yyerror(char const *s) {
    printf("yyerror %s: %s\n",s, yytext);
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