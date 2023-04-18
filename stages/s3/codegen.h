// #include "headers.h"
#include "stack.c"

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

/*Code Generation Happens Here*/
int codeGenerator (FILE *outfile, treenode* node);