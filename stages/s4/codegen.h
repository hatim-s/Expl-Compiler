// #include "headers.h"
#include "stack.c"
#include "symtab.c"

#define REG_COUNT 20
#define REG_FREE 1
#define REG_BUSY 0

#define VAR_COUNT 26

int registers [REG_COUNT];
int variables [VAR_COUNT];

/*Header generation happens here*/
void headerGenerator (FILE *outfile);

/*Other supporting generators*/
void libraryCallGenerator (FILE *outfile, int reg, int call);
void operatorCodeGenerator (FILE *outfile, char* op, int lt, int rt);

/*Supporting functions for code generation -- register & variable support*/
int registerInit ();
int getReg ();
void freeReg (int regNo);
int getVariableLoc (char *c);

/*Variable Declarations Happen Here*/
int declareVariables (treenode* node);
void makeSymbolTableEntry (treenode* node, int type);

/*Code Generation Happens Here*/
int codeGenerator (FILE *outfile, treenode* node);