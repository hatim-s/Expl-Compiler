%{
    #include "codegen.c"
    #include "symtab.c"
    // #include "type.c"
    
    int yylex(void);
    void yyerror (char const *s);
    
    extern FILE* yyin;
    extern char* yytext;
%}

%union {
    struct TreeNode *node;
};

%token ENDSTMT
%token READ WRITE ALLOC FREE INIT
%token NUM ID INT STR NULLL
%token START END DECL ENDDECL TYPE ENDTYPE MAIN RETURN 
%token ADD SUB MUL DIV EQL LT GT EQ GE LE NE AND OR NOT 
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE

%type <node> ID NUM
%type <node> Program TypeDeclBlock GDeclBlock FuncDefBlock MainBlock StmtList ParamList Param FuncDef ParamBlock
%type <node> TypeDeclBlockInit TypeDeclList TypeStmt TypeName FieldDeclList FieldDecl Type
%type <node> GDeclList GDecl GVarList GIdentifierDecl
%type <node> FuncBody LDeclBlock LDeclList LDecl LVarList ArgsList
%type <node> Stmt InStmt OutStmt AssgnStmt InitStmt FreeStmt
%type <node> IfStmt WhileStmt BreakStmt ContinueStmt ReturnStmt
%type <node> Expr Identifier Field

%left ADD SUB
%left MUL DIV
%left EQL

%%

Program : TypeDeclBlock GDeclBlock FuncDefBlock MainBlock
        {
            FILE *outfile = fopen ("code.out", "a");
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
        | TypeDeclBlock GDeclBlock MainBlock
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
        } ;

/* -------------------------------------------------------------------------------------------------------------------------------------- */

TypeDeclBlock   : TypeDeclBlockInit TypeDeclList ENDTYPE { $$ = $2; } ;

TypeDeclBlockInit   : TYPE  { initializeTypeTable (); } ;

TypeDeclList    : TypeDeclList TypeStmt     { $$ = makeConnectorNode ($1, $2); }
                | TypeStmt                  { $$ = $1; } ; 

TypeStmt        : TypeName '{' FieldDeclList '}'  
                {
                    declareType ($3, $1->varname);
                    $$ = makeTypeDeclarationNode ($1->varname, $3); 
                } ;

TypeName        : ID    { addTypeEntry ($1->varname); $$ = $1; } ;

FieldDeclList   : FieldDeclList FieldDecl   { TreeNode* current = $1; while (current->left) current = current->left; current->left = $2; $$ = $1; }
                | FieldDecl                 { $$ = $1; };

FieldDecl       : Type ID ENDSTMT   { $$ = makeFieldDeclNode ($2->varname, $1->vartype); } ;

Type            : INT   { $$ = makeTypeNode ("INT"); } 
                | STR   { $$ = makeTypeNode ("STR"); } 
                | ID    { $$ = makeTypeNode ($1->varname); } ;

/* -------------------------------------------------------------------------------------------------------------------------------------- */

GDeclBlock      : DECL GDeclList ENDDECL     
                { 
                    registerInit ();
                    initializeGTable (); 
                    declareGVariables ($2); 

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

GDeclList       : GDeclList GDecl   { $$ = makeConnectorNode ($1, $2); } 
                | GDecl             { $$ = $1; } ;

GDecl           : Type GVarList ENDSTMT { $$ = makeDeclarationNode ($1, $2); };

GVarList        : GVarList ',' GIdentifierDecl   { $$ = makeConnectorNode ($1, $3); } 
                | GIdentifierDecl                { $$ = $1; } ;

GIdentifierDecl : ID '[' NUM ']'        { $$ = makeArrayDeclNode ($1->varname, $3->varvalue); }
                | ID '(' ParamList ')'  { $$ = makeFunctionDeclNode ($1->varname, $3); }
                | ID                    { $$ = $1; } ; 

/* -------------------------------------------------------------------------------------------------------------------------------------- */

FuncDefBlock    : FuncDefBlock FuncDef  { $1->right = $2; $$ = makeConnectorNode ($1, NULL); }
                | FuncDef               { $$ = makeConnectorNode ($1, NULL); } ;

FuncDef         : Type ID ParamBlock '{' LDeclBlock FuncBody '}' 
                {
                    $$ = makeFunctionDefNode ($1->vartype, $2->varname, $3, $6);

                    if (matchParameters (getFunctionParameters ($$->varname), $$->left) == false) {
                        printf ("error: trying to define an undeclared function\n");
                        exit (0);
                    }

                    FILE *outfile = fopen ("code.out", "a");
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    initializeLTable ();
                }
                | Type ID ParamBlock '{' FuncBody '}' 
                {
                    $$ = makeFunctionDefNode ($1->vartype, $2->varname, $3, $5);

                    if (matchParameters (getFunctionParameters ($$->varname), $$->left) == false) {
                        printf ("error: trying to define an undeclared function\n");
                        exit (0);
                    }

                    FILE *outfile = fopen ("code.out", "a");
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    initializeLTable ();
                } ;

ParamBlock      : '(' ParamList ')'     { declareLVariables ($2); $$ = $2; }

ParamList       : ParamList ',' Param   { TreeNode* current = $1; while (current->left) current = current->left; current->left = $3; $$ = $1; }
                | Param                 { $$ = $1; }
                |                       { $$ = NULL; } ;

Param           : Type ID   { $$ = makeParameterNode ($1->vartype, $2->varname); } ;

LDeclBlock      : DECL LDeclList ENDDECL     { declareLVariables ($2); $$ = $2; }
                | DECL ENDDECL               {} ;

LDeclList       : LDeclList LDecl   { $$ = makeConnectorNode ($1, $2); }
                | LDecl             { $$ = $1; } ;

LDecl           : Type LVarList ENDSTMT { $$ = makeDeclarationNode ($1, $2); } ;

LVarList        : LVarList ',' ID   { $$ = makeConnectorNode ($1, $3); }
                | ID                { $$ = $1; } ;


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
        | FreeStmt      { $$ = $1; } 
        | InitStmt      { $$ = $1; } 
        | AssgnStmt     { $$ = $1; } 
        | IfStmt        { $$ = $1; } 
        | WhileStmt     { $$ = $1; } 
        | BreakStmt     { $$ = $1; } 
        | ContinueStmt  { $$ = $1; }
        | ReturnStmt    { $$ = $1; };

InStmt      : READ '(' Identifier ')' ENDSTMT   { $3->vartype = getVariableType ($3->varname); $$ = makeReadNode ($3); }; 
OutStmt     : WRITE '(' Expr ')' ENDSTMT        { $$ = makeWriteNode ($3); }
            | WRITE '(' '"' ID '"' ')' ENDSTMT  { $4->nodetype = STRING_NODE; $$ = makeWriteNode ($4); };

/* AllocStmt   : ALLOC '(' ')' ENDSTMT             { $$ = makeAllocNode (); } */
FreeStmt    : FREE '(' ')' ENDSTMT              { $$ = makeFreeNode (); }
InitStmt    : INIT '(' ')' ENDSTMT              { $$ = makeInitNode (); }

AssgnStmt   : Identifier EQL Expr ENDSTMT       { $$ = makeOperatorNode ("=", $1, $3); };

BreakStmt       : BREAK ENDSTMT         { $$ = makeBreakNode (); };
ContinueStmt    : CONTINUE ENDSTMT      { $$ = makeContinueNode (); };

IfStmt  : IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ENDSTMT     { $$ = makeIfElseNode ($3, $6, $8); }
        | IF '(' Expr ')' THEN StmtList ENDIF ENDSTMT                   { $$ = makeIfNode ($3, $6); } ;

WhileStmt : WHILE '(' Expr ')' DO StmtList ENDWHILE ENDSTMT             { $$ = makeWhileNode ($3, $6); } ;

ReturnStmt : RETURN Expr ENDSTMT    { $$ = makeReturnNode ($2); } ;

Expr    : '(' Expr ')'          { $$ = $2; }
        | Expr ADD Expr         { $$ = makeOperatorNode ("+", $1, $3); }
        | Expr SUB Expr         { $$ = makeOperatorNode ("-", $1, $3); }
        | Expr MUL Expr         { $$ = makeOperatorNode ("*", $1, $3); }
        | Expr DIV Expr         { $$ = makeOperatorNode ("/", $1, $3); }
        | Expr LT Expr          { $$ = makeOperatorNode ("<", $1, $3); }
        | Expr GT Expr          { $$ = makeOperatorNode (">", $1, $3); }
        | Expr EQ Expr          { $$ = makeOperatorNode ("==", $1, $3); }
        | Expr LE Expr          { $$ = makeOperatorNode ("<=", $1, $3); }
        | Expr GE Expr          { $$ = makeOperatorNode (">=", $1, $3); }
        | Expr NE Expr          { $$ = makeOperatorNode ("!=", $1, $3); }
        | Expr AND Expr         { $$ = makeOperatorNode ("&&", $1, $3); }
        | Expr OR Expr          { $$ = makeOperatorNode ("||", $1, $3); }
        | Expr NOT Expr         { $$ = makeOperatorNode ("~", $1, $3); }
        | Identifier            { $$ = $1; } 
        | ID '(' ArgsList ')'   { $1->vartype = getVariableType ($1->varname); $$ = makeFunctionCallNode ($1->varname, $3); }
        | ALLOC '('  ')'        { $$ = makeAllocNode (); }    
        | NUM                   { $1->vartype = getTypeNode ("INT"); $$ = $1; } 
        | NULLL                 { $$ = makeNullNode (); };

Identifier  : ID '[' Expr ']'       { $$ = makeArrayNode ($1->varname, $3); }
            | ID                    { $1->vartype = getVariableType ($1->varname); $$ = $1; } 
            | Field                 { $$ = $1; } ;

ArgsList    : ArgsList ',' Expr     { $$ = makeConnectorNode ($1, $3); }
            | Expr                  { $$ = $1; } 
            |                       { $$ = NULL; } ;

Field       : Field '.' ID          
            {
                TreeNode* current = $1; 
                while (current->left) current = current->left;
                current->left = makeFieldNode ($3->varname, getFieldType ($3->varname, current->vartype), getFieldIndex ($3->varname, current->vartype));
                $1->vartype = current->left->vartype;
                $$ = $1; 
            }
            | ID '.' ID 
            { 
                $1->vartype = getVariableType ($1->varname); 
                $1->left = makeFieldNode ($3->varname, getFieldType ($3->varname, $1->vartype), getFieldIndex ($3->varname, $1->vartype));
                $1->vartype = $1->left->vartype;
                $$ = $1;
            } ;

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