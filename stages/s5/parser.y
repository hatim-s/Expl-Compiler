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
%token DECL ENDDECL RETURN INT STR MAIN

%type <node> ID NUM
%type <node> Program GDeclBlock FuncDefBlock MainBlock StmtList ParamList Param FuncDef ParamBlock
%type <node> GDeclList GDecl Type GVarList GIdentifierDecl
%type <node> Stmt InStmt OutStmt AssgnStmt IfStmt WhileStmt BreakStmt ContinueStmt ReturnStmt
%type <node> FuncBody LDeclBlock LDeclList LDecl LVarList ArgsList
%type <node> Expr Identifier 

%left ADD SUB
%left MUL DIV
%left EQL

%%

Program : GDeclBlock FuncDefBlock MainBlock
        {
            // $$ = $3->left;
            // free ($3);

            FILE *outfile = fopen ("code.out", "a");
            
            // registerInit ();
            // headerGenerator (outfile);
            // codeGenerator (outfile, $3);
            fprintf (outfile, "INT 10\n"); 
            
            fclose (outfile);
            
            return 0;
        } 
        | GDeclBlock MainBlock  
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");             
            fclose (outfile);
            return 0;
        }
        | MainBlock             
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");             
            fclose (outfile);
            return 0;
        };

/* -------------------------------------------------------------------------------------------------------------------------------------- */

GDeclBlock      : DECL GDeclList ENDDECL     
                { 
                    registerInit ();
                    initializeGTable (); 
                    declareGVariables ($2->left); 

                    initializeLTable ();
                    FILE *outfile = fopen ("code.out", "w");
                    headerGenerator (outfile);
                    fclose (outfile);
                }

                | DECL ENDDECL               
                {
                    registerInit ();

                    initializeLTable ();
                    FILE *outfile = fopen ("code.out", "w");
                    headerGenerator (outfile);
                    fclose (outfile);
                } ;

GDeclList       : GDeclList GDecl   { $1->right = $2; $$ = makeConnectorNode ($1, NULL); } 
                | GDecl             { $$ = makeConnectorNode ($1, NULL); } ;

GDecl           : Type GVarList ENDSTMT { $$ = makeDeclarationNode ($1, $2); };

Type            : INT   { $$ = makeTypeNode (TYPE_INT); } 
                | STR   { $$ = makeTypeNode (TYPE_STR); } ;

GVarList        : GVarList ',' GIdentifierDecl   { $1->right = $3; $$ = makeConnectorNode ($1, NULL); } 
                | GIdentifierDecl                { $$ = makeConnectorNode ($1, NULL); } ;

GIdentifierDecl : ID '[' NUM ']'        { $$ = makeArrayDeclNode ($1->varname, $3->varvalue); }
                | ID '(' ParamList ')'  { $$ = makeFunctionDeclNode ($1->varname, $3); }
                | ID                    { $$ = $1; } ; 

/* -------------------------------------------------------------------------------------------------------------------------------------- */

FuncDefBlock    : FuncDefBlock FuncDef  { $1->right = $2; $$ = makeConnectorNode ($1, NULL); }
                | FuncDef               { $$ = makeConnectorNode ($1, NULL); } ;

FuncDef         : Type ID ParamBlock '{' LDeclBlock FuncBody '}' 
                {
                    // initializeLTable (); declareLVariables ($4); declareLVariables ($7);

                    if (matchParameters (getFunctionParameters ($2->varname), $$->left)) {
                        FILE *outfile = fopen ("code.out", "a"); 
                        codeGenerator (outfile, $$); 
                        fclose (outfile);
                    }
                    else {
                        printf ("error: trying to define an undeclared function\n");
                        exit (0);
                    }

                    FILE *outfile = fopen ("code.out", "a");
                    $$ = makeFunctionDefNode ($1->vartype, $2->varname, $3, $6);
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    initializeLTable ();
                }
                | Type ID ParamBlock '{' FuncBody '}' 
                {
                    if (matchParameters (getFunctionParameters ($2->varname), $$->left)) {
                        FILE *outfile = fopen ("code.out", "a"); 
                        codeGenerator (outfile, $$); 
                        fclose (outfile);
                    }
                    else {
                        printf ("error: trying to define an undeclared function\n");
                        exit (0);
                    }

                    FILE *outfile = fopen ("code.out", "a");
                    $$ = makeFunctionDefNode ($1->vartype, $2->varname, $3, $5);
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    initializeLTable ();
                }

ParamBlock      : '(' ParamList ')'     { declareLVariables ($2); $$ = $2; }

ParamList       : ParamList ',' Param   
                { 
                    treenode* current = $1; 
                    while (current->left) current = current->left;
                    current->left = $3;
                    $$ = $1; 
                }
                | Param                 { $$ = $1; }
                |                       { $$ = NULL; } ;

Param           : Type ID   { $$ = makeParameterNode ($1->vartype, $2->varname); } ;

LDeclBlock      : DECL LDeclList ENDDECL     { declareLVariables ($2->left); $$ = $2->left; }
                | DECL ENDDECL               {} ;

LDeclList       : LDeclList LDecl   { $1->right = $2; $$ = makeConnectorNode ($1, NULL); }
                | LDecl             { $$ = makeConnectorNode ($1, NULL); } ;

LDecl           : Type LVarList ENDSTMT { $$ = makeDeclarationNode ($1, $2); } ;

LVarList        : LVarList ',' ID   { $1->right = $3; $$ = makeConnectorNode ($1, NULL); }
                | ID                { $$ = makeConnectorNode ($1, NULL); } ;


/* -------------------------------------------------------------------------------------------------------------------------------------- */

MainBlock   : INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'
            {
                setStaticBinding (NULL);
                FILE *outfile = fopen ("code.out", "a");
                fprintf (outfile, "MAIN:\n");

                LSymtableNode* current = t.head;
                while (current) {
                    fprintf (outfile, "PUSH R0\n");
                    current = current->next;
                }

                codeGenerator (outfile, $7);
                fclose (outfile);
            }
            | INT MAIN '(' ')' '{' FuncBody '}'
            {
                // setStaticBinding (NULL);
                FILE *outfile = fopen ("code.out", "a");
                fprintf (outfile, "MAIN:\n");
                codeGenerator (outfile, $6);
                fclose (outfile);
            };

FuncBody    : START StmtList END    { $$ = $2; } ;

StmtList    : StmtList Stmt { $$ = makeConnectorNode ($1, $2); }
            | Stmt          { $$ = $1; } ;

Stmt    : OutStmt       { $$ = $1; } 
        | InStmt        { $$ = $1; } 
        | AssgnStmt     { $$ = $1; } 
        | IfStmt        { $$ = $1; } 
        | WhileStmt     { $$ = $1; } 
        | BreakStmt     { $$ = $1; } 
        | ContinueStmt  { $$ = $1; }
        | ReturnStmt    { $$ = $1; };

InStmt      : READ '(' Identifier ')' ENDSTMT   { $3->vartype = getVariableType ($3->varname); $$ = makeReadNode ($3); }; 
OutStmt     : WRITE '(' Expr ')' ENDSTMT        { $$ = makeWriteNode ($3); };
AssgnStmt   : Identifier EQL Expr ENDSTMT       { $1->vartype = getVariableType ($1->varname); $$ = makeOperatorNode ("=", $1, $3); };

BreakStmt       : BREAK ENDSTMT         { $$ = makeBreakNode (); };
ContinueStmt    : CONTINUE ENDSTMT      { $$ = makeContinueNode (); };

IfStmt  : IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ENDSTMT     { $$ = makeIfElseNode ($3, $6, $8); }
        | IF '(' Expr ')' THEN StmtList ENDIF ENDSTMT                   { $$ = makeIfNode ($3, $6); } ;

WhileStmt : WHILE '(' Expr ')' DO StmtList ENDWHILE ENDSTMT             { $$ = makeWhileNode ($3, $6); } ;

ReturnStmt : RETURN Expr ENDSTMT    { $$ = makeReturnNode ($2); }

Expr    : Expr ADD Expr         { $$ = makeOperatorNode ("+", $1, $3); }
        | Expr SUB Expr         { $$ = makeOperatorNode ("-", $1, $3); }
        | Expr MUL Expr         { $$ = makeOperatorNode ("*", $1, $3); }
        | Expr DIV Expr         { $$ = makeOperatorNode ("/", $1, $3); }
        | Expr LT Expr          { $$ = makeOperatorNode ("<", $1, $3); }
        | Expr GT Expr          { $$ = makeOperatorNode (">", $1, $3); }
        | Expr EQ Expr          { $$ = makeOperatorNode ("==", $1, $3); }
        | Expr LE Expr          { $$ = makeOperatorNode ("<=", $1, $3); }
        | Expr GE Expr          { $$ = makeOperatorNode (">=", $1, $3); }
        | Expr NE Expr          { $$ = makeOperatorNode ("!=", $1, $3); }
        | '(' Expr ')'          { $$ = $2; }
        | Identifier            { $1->vartype = getVariableType ($1->varname); $$ = $1; } 
        | ID '(' ArgsList ')'   { $1->vartype = getVariableType ($1->varname); $$ = makeFunctionCallNode ($1->varname, $3); }
        | NUM                   { $$ = $1; } ;

Identifier  : ID '[' Expr ']'       { $$ = makeArrayNode ($1->varname, $3); }
            | ID                    { $$ = $1; } ;

ArgsList    : ArgsList ',' Expr { $1->right = $3; $$ = makeConnectorNode ($1, NULL); }
            | Expr              { $$ = makeConnectorNode ($1, NULL); } 
            |                   { $$ = makeConnectorNode (NULL, NULL); } ;

%% /* -------------------------------------------------------------------------------------------------------------------------------------- */

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