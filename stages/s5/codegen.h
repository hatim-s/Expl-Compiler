#include "stack.c"
// #include "symtab.c"
// #include "tree.c"
#include "symtab.h"

#define REG_COUNT 20
#define REG_BUSY 0
#define REG_FREE 1
#define REG_LOCKED 2

#define VAR_COUNT 26

int registers [REG_COUNT];
int variables [VAR_COUNT];

// register access and usage
int registerInit () ;
int getReg () ;
void freeReg (int regNo) ;
int getLabel () ;

// header generator
void headerGenerator (FILE *outfile);

// accessory functions
int locationGenerator (FILE* outfile, treenode* node);
void pushArguements (FILE *outfile, treenode* root);

// other generators
void libraryCallGenerator (FILE *outfile, int call, int reg);
void operatorCodeGenerator (FILE *outfile, char* op, int lt, int rt);
int functionGenerator (FILE *outfile, treenode* node);
int codeGenerator (FILE *outfile, treenode* node);