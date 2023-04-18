%{
      #include <stdio.h>
      #include <stdlib.h>
      #include "headers.h"
      #include "functions.c"
%}

%token DIGIT NEWLINE
%left '+' '-'
/* %left '*' '/' */

%%

start   : expr NEWLINE  
        {
            printf("\nComplete\n");
            exit(1);
        };

expr    :   expr '+' expr   
        { printf("+ "); }

        | expr '-' expr   
        { printf("- "); }
        
        | '(' expr ')'
        
        | DIGIT
        { printf("%d ",$1); };

%%

void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}

int main()
{
  yyparse();
  return 1;
}