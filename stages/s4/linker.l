%{
	#include "y.tab.h"
	#include "linker.c"

	char* in_filename;
	char* out_filename = "output.xsm";
	FILE* outfile;
%}

%%
LBL[0-9]+:\n        { if (pass == 1) addLabelToTable (table, yytext, 2056 + 2*(address-1)); }
LBL[0-9]+\n			{ pass == 1 ? address++ : fprintf (outfile, "%d\n", searchLabel(table,yytext)); }
\n					{ pass == 1 ? address++ : fprintf (outfile,"\n"); }
.					{ if (pass == 2) fprintf (outfile,"%s",yytext); }

%%

int yywrap(void) {
	if(pass++ != 1) return 1;
    yyin = fopen (in_filename, "r");
    return 0;
}

int main(int argc, char* argv[]){

	table = (struct labelAddressTable*) malloc (sizeof(struct labelAddressTable));
	
	if(argc > 1){
		in_filename = argv[1];
		yyin = fopen (in_filename, "r");
    }

    if(argc > 2) outfile = fopen(argv[2],"w");
	
	yylex();
	
	fclose (yyin);
	fclose (outfile);
	return 0;
}