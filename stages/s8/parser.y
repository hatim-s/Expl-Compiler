%{
    #include "codegen.c"
    #include "symtab.c"
    #include "type.h"
    #include "class.h"
    
    int yylex(void);
    void yyerror (char const *s);
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;;
%}

%union {
    struct TreeNode *node;
};

%token ENDSTMT
%token READ WRITE ALLOC FREE INIT NEW DELETE
%token NUM ID SID INT STR NULLL
%token START END DECL ENDDECL TYPE ENDTYPE CLASS ENDCLASS MAIN RETURN EXTENDS SELF
%token ADD SUB MUL DIV EQL LT GT EQ GE LE NE AND OR NOT 
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE

%type <node> ID NUM SELF SID
%type <node> Program TypeDeclBlock GDeclBlock FuncDefBlock MainBlock ParamList Param ParamBlock
%type <node> TypeDeclBlockInit TypeDeclList TypeStmt TypeName FieldDeclList FieldDecl Type
%type <node> GDeclList GDecl GVarList GIdentifierDecl
%type <node> FuncBody LDeclBlock LDeclList LDecl LVarList ArgsList FuncDef
%type <node> StmtList Stmt InStmt OutStmt AssgnStmt FreeStmt DeleteStmt
%type <node> IfStmt WhileStmt BreakStmt ContinueStmt ReturnStmt
%type <node> Expr Identifier Field FieldFunc
%type <node> ClassDeclBlock ClassDeclList ClassDecl ClassName MethodDeclList MethodDefList MethodDecl MethodDef MemberDeclList MemberDecl

%left ADD SUB
%left MUL DIV
%left EQL

%%

Program : TypeDeclBlock ClassDeclBlock GDeclBlock FuncDefBlock MainBlock    {}
        | TypeDeclBlock ClassDeclBlock GDeclBlock MainBlock                 {}
        | ClassDeclBlock GDeclBlock FuncDefBlock MainBlock                  {}
        | ClassDeclBlock GDeclBlock MainBlock                               {}
        | TypeDeclBlock GDeclBlock FuncDefBlock MainBlock                   {}
        | TypeDeclBlock GDeclBlock MainBlock                                {}
        | TypeDeclBlock MainBlock                                           {}
        | GDeclBlock FuncDefBlock MainBlock                                 {}
        | GDeclBlock MainBlock                                              {}
        ;

/* -------------------------------------------------------------------------------------------------------------------------------------- */

TypeDeclBlock       : TypeDeclBlockInit TypeDeclList ENDTYPE {} ;

TypeDeclBlockInit   : TYPE  { initializeTypeTable (); } ;

TypeDeclList        : TypeDeclList TypeStmt     {}
                    | TypeStmt                  {} ; 

TypeStmt            : TypeName '{' FieldDeclList '}'  {} ;

TypeName            : ID    { addTypeEntry ($1->varname); $$ = $1; } ;

FieldDeclList       : FieldDeclList FieldDecl   {}
                    | FieldDecl                 {};

FieldDecl           : Type ID ENDSTMT   { $$ = makeFieldDeclNode ($2->varname, $1->datatype, $1->classtype); addField ($$); } ;

Type                : INT   { $$ = makeTypeNode ("INT"); } 
                    | STR   { $$ = makeTypeNode ("STR"); } 
                    | ID    { $$ = getClassNode ($1->varname) ? makeClassTypeNode ($1->varname) : makeTypeNode ($1->varname); } ;

/* -------------------------------------------------------------------------------------------------------------------------------------- */

ClassDeclBlock  : ClassDeclBlockInit ClassDeclList ENDCLASS      {} ;

ClassDeclBlockInit : CLASS                          
                    {
                        registerInit ();
                        FILE *outfile = fopen ("code-o.xsm", "w");
                        headerGenerator (outfile);
                        fclose (outfile);
                    } ;

ClassDeclList   : ClassDecl ClassDeclList   {} 
                | ClassDecl                 {};

ClassDecl       : ClassName '{' DECL MemberDeclList MethodDeclList ENDDECL MethodDefList '}'    {} 
                | ClassName '{' DECL MethodDeclList ENDDECL MethodDefList '}'                   {} 
                | ClassName '{' DECL MemberDeclList ENDDECL '}'                                 {} ;

ClassName       : ID                { initializeLTable (); addClassEntry ($1->varname, NULL); }
                | ID EXTENDS ID     
                { 
                    initializeLTable (); addClassEntry ($1->varname, $3->varname);
                    extendedClass = true;
                } ;

MemberDeclList  : MemberDeclList MemberDecl     {}
                | MemberDecl                    {} ;

MemberDecl      : Type ID ENDSTMT   { $$ = makeFieldDeclNode ($2->varname, $1->datatype, $1->classtype); addMember ($$); } ;

MethodDeclList  : MethodDeclList MethodDecl     {} 
                | MethodDecl                    {} ;

MethodDecl      : Type ID '(' ParamList ')' ENDSTMT     
                { 
                    if ($1->nodetype == CLASSTYPE_NODE) {
                        printf ("ERROR : method : %s return type cannot be class\n", $2->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    $$ = makeMethodDeclNode ($2->varname, $1->datatype, NULL, $4); 

                    addMethod ($$);
                } ;

MethodDefList   : MethodDefList MethodDef       {}
                | MethodDef                     {} ;

MethodDef       : Type ID ParamBlock '{' LDeclBlock FuncBody '}'    
                { 
                    if (matchParameters (getMethod($2->varname)->param, $3) == false) {
                        printf ("ERROR : trying to define an undeclared method\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getMethod ($2->varname)->declStatus == DEFINED) {
                        printf ("ERROR : method '%s' is already defined earlier.\n", $2->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    $$ = makeMethodDefNode ($2->varname, $1->datatype, $3, $6); 

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    getMethod ($2->varname)->declStatus = DEFINED;
                    initializeLTable ();
                }
                | Type ID ParamBlock '{' FuncBody '}'    
                { 
                    if (matchParameters (getMethod($2->varname)->param, $3) == false) {
                        printf ("ERROR : trying to define an undeclared method\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getMethod ($2->varname)->declStatus == DEFINED) {
                        printf ("ERROR : method '%s' is already defined earlier.\n", $2->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    $$ = makeMethodDefNode ($2->varname, $1->datatype, $3, $5); 

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    getMethod ($2->varname)->declStatus = DEFINED;
                    initializeLTable ();
                } ;

/* -------------------------------------------------------------------------------------------------------------------------------------- */

GDeclBlock      : DECL GDeclList ENDDECL        { initializeGTable (); declareGVariables ($2); initializeLTable (); }
                | DECL ENDDECL                  { initializeLTable (); } ;

GDeclList       : GDeclList GDecl               { TreeNode *current = $1; while (current->left) current = current->left; current->left = $2; $$ = $1; } 
                | GDecl                         { $$ = $1; } ;

GDecl           : Type GVarList ENDSTMT         { $$ = makeDeclarationNode ($1->datatype, $1->classtype, NULL, $2); };

GVarList        : GVarList ',' GIdentifierDecl  { TreeNode *current = $1; while (current->left) current = current->left; current->left = $3; $$ = $1; } 
                | GIdentifierDecl               { $$ = $1; } ;

GIdentifierDecl : ID '[' NUM ']'                { $$ = makeArrayDeclNode ($1->varname, $3->varvalue); }
                | ID '(' ParamList ')'          { $$ = makeFunctionDeclNode ($1->varname, NULL, $3); }
                | ID                            { $$ = $1; } ; 

/* -------------------------------------------------------------------------------------------------------------------------------------- */

FuncDefBlock    : FuncDefBlock FuncDef  {}
                | FuncDef               {} ;

FuncDef         : Type ID ParamBlock '{' LDeclBlock FuncBody '}' 
                {
                    if (matchParameters (getGVariable($2->varname)->param, $3) == false) {
                        printf ("ERROR: trying to define an undeclared function\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getGVariable ($2->varname)->declStatus == DEFINED) {
                        printf ("ERROR : function '%s' is already defined earlier.\n", $2->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    getGVariable ($2->varname)->declStatus = DEFINED;

                    initializeLTable ();
                }
                | Type ID ParamBlock '{' FuncBody '}' 
                {
                    if (matchParameters (getGVariable($$->varname)->param, $3) == false) {
                        printf ("ERROR: trying to define an undeclared function\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getGVariable ($2->varname)->declStatus == DEFINED) {
                        printf ("ERROR : function '%s' is already defined earlier.\n", $2->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, $$);
                    fclose (outfile);

                    getGVariable ($2->varname)->declStatus = DEFINED;

                    initializeLTable ();
                } ;

ParamBlock      : '(' ParamList ')'     { declareLParameters ($2); $$ = $2; }

ParamList       : ParamList ',' Param   { TreeNode* current = $1; while (current->left) current = current->left; current->left = $3; $$ = $1; }
                | Param                 { $$ = $1; }
                |                       { $$ = NULL; } ;

Param           : Type ID   { $$ = makeParameterNode ($1->datatype, $2->varname); } ;

LDeclBlock      : DECL LDeclList ENDDECL     { declareLVariables ($2); $$ = $2; }
                | DECL ENDDECL               { $$ = NULL; } ;

LDeclList       : LDeclList LDecl   { TreeNode *current = $1; while (current->left) current = current->left; current->left = $2; $$ = $1; }
                | LDecl             { $$ = $1; } ;

LDecl           : Type LVarList ENDSTMT 
                { 
                    if ($1->classtype) { printf ("ERROR : class-type variables cannot be declared locally\n"); printf ("Line : %d\n", yylineno); exit (1); }
                    $$ = makeDeclarationNode ($1->datatype, NULL, NULL, $2); 
                } ;

LVarList        : LVarList ',' ID   { TreeNode *current = $1; while (current->left) current = current->left; current->left = $3; $$ = $1; }
                | ID                { $$ = $1; } ;

FuncBody        : START StmtList END    { $$ = $2; } ;

/* -------------------------------------------------------------------------------------------------------------------------------------- */

MainBlock   : INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'
            {
                setStaticBinding (NULL, -3);

                FILE *outfile = fopen ("code-o.xsm", "a");
                fprintf (outfile, "MAIN:\n");
                stackPointerGenerator (outfile);
                methodInitGenerator (outfile);

                LSymtableNode* current = t.head;
                while (current) {
                    fprintf (outfile, "PUSH R0\n");
                    current = current->next;
                }

                codeGenerator (outfile, $7);
                fprintf (outfile, "INT 10\n");
                fclose (outfile);
            }
            | INT MAIN '(' ')' '{' FuncBody '}'
            {
                FILE *outfile = fopen ("code-o.xsm", "a");
                fprintf (outfile, "MAIN:\n");
                stackPointerGenerator (outfile);
                methodInitGenerator (outfile);

                codeGenerator (outfile, $6);
                fprintf (outfile, "INT 10\n");
                
                fclose (outfile);
            };

StmtList    : StmtList Stmt { $$ = makeConnectorNode ($1, $2); }
            | Stmt          { $$ = $1; } ;

Stmt        : OutStmt       { $$ = $1; } 
            | InStmt        { $$ = $1; } 
            | AssgnStmt     { $$ = $1; } 
            | FreeStmt      { $$ = $1; } 
            | DeleteStmt    { $$ = $1; } 
            | IfStmt        { $$ = $1; } 
            | WhileStmt     { $$ = $1; } 
            | BreakStmt     { $$ = $1; } 
            | ContinueStmt  { $$ = $1; }
            | ReturnStmt    { $$ = $1; } ;

InStmt          : READ '(' Identifier ')' ENDSTMT       { $$ = makeReadNode ($3); }; 
OutStmt         : WRITE '(' Expr ')' ENDSTMT            { $$ = makeWriteNode ($3); }
                | WRITE '(' SID ')' ENDSTMT             { $$ = makeWriteNode ($3); } ;

/* IDSeq           : IDSeq ID      { strcat ($1->varname, " "); strcat ($1->varname, $2->varname); $$ = $1; }
                | ID            { $1->nodetype = STRING_NODE; $$ = $1; } ; */

/* AllocStmt       : ID EQL ALLOC '(' ')' ENDSTMT      { $$ = makeAllocNode (); } */
FreeStmt        : FREE '(' ID ')' ENDSTMT           { $$ = makeFreeNode ($3); }
/* InitStmt        : INIT '(' ')' ENDSTMT              { $$ = makeInitNode (); } */

/* NewStmt         : ID EQL NEW '(' ID ')' ENDSTMT     { $$ = makeNewNode ($1, $5); } */
DeleteStmt      : DELETE '(' ID ')'                 { $$ = makeDeleteNode ($3); }

AssgnStmt       : Identifier EQL Expr ENDSTMT       { $$ = makeOperatorNode ("=", $1, $3); } ;

BreakStmt       : BREAK ENDSTMT         { $$ = makeBreakNode (); };
ContinueStmt    : CONTINUE ENDSTMT      { $$ = makeContinueNode (); };

IfStmt          : IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ENDSTMT     { $$ = makeIfElseNode ($3, $6, $8); }
                | IF '(' Expr ')' THEN StmtList ENDIF ENDSTMT                   { $$ = makeIfNode ($3, $6); } ;

WhileStmt       : WHILE '(' Expr ')' DO StmtList ENDWHILE ENDSTMT               { $$ = makeWhileNode ($3, $6); } ;

ReturnStmt      : RETURN Expr ENDSTMT    { $$ = makeReturnNode ($2); } ;

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
        | FieldFunc             { $$ = $1; }
        | ID '(' ArgsList ')'   { $1->datatype = getVariableType ($1->varname); $$ = makeFunctionCallNode ($1->varname, $3); }
        | NUM                   { $1->datatype = getTypeNode ("INT"); $$ = $1; } 
        | SID                   { $$ = $1; }
        | NULLL                 { $$ = makeNullNode (); } 
        | ALLOC '(' ')'         { $$ = makeAllocNode (); }
        | INIT '(' ')'          { $$ = makeInitNode (); }
        | NEW '(' ID ')'        { $$ = makeNewNode ($3); }
        ;

Identifier  : ID                    { $1->datatype = getVariableType ($1->varname); $1->classtype = getVariableClassType ($1->varname); $$ = $1; } 
            | ID '[' Expr ']'       { $$ = makeArrayNode ($1->varname, $3); }
            | Field                 { $$ = $1; } ;

ArgsList    : ArgsList ',' Expr     { $$ = makeConnectorNode ($1, $3); }
            | Expr                  { $$ = $1; } 
            |                       { $$ = NULL; } ;

Field       : Field '.' ID
            {
                TreeNode* current = $1; 
                while (current->left) current = current->left;
                
                if ($1->classtype == NULL) {
                    current->left = makeFieldNode ($3->varname, getField($3->varname, $1->datatype)->type, getField ($3->varname, $1->datatype)->fieldIndex);
                    $1->datatype = current->left->datatype; 
                }
                else {
                    printf ("ERROR : illegal access to member %s\n", $3->varname);
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }
                
                $$ = $1; 
            }
            | ID '.' ID
            { 
                $1->datatype = getVariableType ($1->varname); $1->classtype = getVariableClassType ($1->varname); 
                
                if ($1->classtype == NULL) {
                    $1->left = makeFieldNode ($3->varname, getField ($3->varname, $1->datatype)->type, getField ($3->varname, $1->datatype)->fieldIndex);
                    $1->datatype = $1->left->datatype;
                }
                else {
                    printf ("ERROR : illegal access to method %s\n", $3->varname);
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }

                $$ = $1;
            } 
            | SELF '.' ID
            {
                if (currentClass == NULL) {
                    printf ("ERROR : undefined reference to 'self'\n");
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }

                $1->left = makeFieldNode ($3->varname, getMember($3->varname)->type, getMember($3->varname)->fieldIndex);
                $1->datatype = $1->left->datatype; $1->classtype = getMember($3->varname)->classtype;
                $$ = $1;
            } ;

FieldFunc   : ID '.' ID '(' ArgsList ')'    
            {
                $1->classtype = getVariableClassType ($1->varname);
                if ($1->classtype == NULL) { 
                    printf ("ERROR : '%s' does not contain methods\n", $1->varname); 
                    printf ("Line : %d\n", yylineno); exit (1); 
                }

                $$ = makeMethodCallNode ($3->varname, $1, $5); 
                $$->classtype = $1->classtype; $$->datatype = getMethodFromClass ($3->varname, $1->classtype)->type;
            }
            | SELF '.' ID '(' ArgsList ')' 
            {
                if (currentClass == NULL) { 
                    printf ("ERROR : undefined reference to 'self'\n"); 
                    printf ("Line : %d\n", yylineno);
                    exit (1); 
                }

                $$ = makeMethodCallNode ($3->varname, $1, $5); 
                $$->classtype = currentClass; $$->datatype = getMethod ($3->varname)->type;
            }
            | SELF '.' ID '.' ID '(' ArgsList ')'
            { 
                if (currentClass == NULL) {
                    printf ("ERROR : undefined reference to 'self'\n");
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }

                $1->left = makeFieldNode ($3->varname, getMember($3->varname)->type, getMember($3->varname)->fieldIndex);
                $1->classtype = getMember($3->varname)->classtype; 

                if ($1->classtype == NULL) { 
                    printf ("ERROR : '%s' does not contain methods\n", $3->varname); 
                    printf ("Line : %d\n", yylineno); exit (1); 
                }
                
                $$ = makeMethodCallNode ($5->varname, $1, $7);
                $$->classtype = $1->classtype; $$->datatype = getMethodFromClass ($5->varname, $1->classtype)->type;
            } 
            | ID '.' ID '.' ID '(' ArgsList ')' 
            {
                printf ("ERROR : illegal access to method %s\n", $5->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
            | Field '.' ID '.' ID '(' ArgsList ')' {
                printf ("ERROR : illegal access to method %s\n", $5->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            } ;

%% /* -------------------------------------------------------------------------------------------------------------------------------------- */

void yyerror(char const *s) {
    printf("yyerror %s: %s\n",s, yytext);
    printf ("Line : %d\n", yylineno);
    exit (1);
}

int main (int argc, char const *argv []) {
    if (argc > 1) {
        FILE* inp = fopen (argv[1], "r");
        if (inp) yyin = inp;
    }

    yyparse ();

    return 0;
}