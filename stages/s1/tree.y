%{
    // #include <stdlib.h>
    // #include <stdio.h>
    #include "headers.h"
    #include "treefunctions.c"
    #include "codegen.c"
    int yylex(void);
    void yyerror (char const *s);
%}

%union {
    int integer;
    char character;
    struct treenode *node;
};

%token NUM ADD SUB MUL DIV END

/* %type <integer> NUM */
%type <node> expr program

%left ADD SUB
%left MUL DIV

%%

program : expr END 
        {
            $$ = $1;
            int answerReg = codeGenerate ($$);
            printGenerator (answerReg);
            printf("Answer : %d\n", evaluate ($$));
            return 0;
        } ;

expr    : expr ADD expr     { $<node>$ = makeOperatorNode('+', $<node>1, $<node>3); }
        | expr SUB expr     { $<node>$ = makeOperatorNode('-', $<node>1, $<node>3); }
        | expr MUL expr     { $<node>$ = makeOperatorNode('*', $<node>1, $<node>3); }
        | expr DIV expr     { $<node>$ = makeOperatorNode('/', $<node>1, $<node>3); }
        | '(' expr ')'      { $<node>$ = $<node>2; }
        | NUM               { $<node>$ = makeLeafNode ($<integer>1); };

%%

void yyerror(char const *s) {
    printf("yyerror %s",s);
}

int main (void) {
    registerInit ();
    /* FILE *infile = fopen ("./input.xsm", "r"); */

    /* FILE *outfile = fopen ("./output.xsm", "w");
    fprintf (outfile, "");
    fclose (outfile); */

    headerGenerator ();

    yyparse ();

    return 0;
}