#ifndef codegen
#define codegen

#include "stack.c"
#include "tree.c"

#define REG_COUNT 20
#define REG_BUSY 0
#define REG_FREE 1
#define REG_LOCKED 2

#define VAR_COUNT 26

int registers [REG_COUNT];
int variables [VAR_COUNT];

int argCount = 0;

int registerInit () {
    registers[0] = REG_LOCKED;
    for (int i = 1; i < REG_COUNT; i++) registers[i] = REG_FREE;
}

int getReg () {
    for (int i = 1; i < REG_COUNT; i++)
        if (registers [i] == REG_FREE) {
            registers [i] = REG_BUSY;
            return i; 
        }

    printf ("error: registers exhausted\n");
    exit (0);
}

void freeReg (int regNo) {
    registers [regNo] = REG_FREE;
}

int getLabel () {
    static int l = 0;
    return l++;
}

void headerGenerator (FILE *outfile){
    fprintf (outfile, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf (outfile, "MOV SP, %d\n", getNewLocation(0)-1);
    fprintf (outfile, "MOV BP, %d\nBRKP\n", getNewLocation(0)-1);
    fprintf (outfile, "JMP MAIN\n");
}

/* ------------------------------------------------------------------ Other function declarations ------------------------------------------------------------------ */

int locationGenerator (FILE* outfile, treenode* node);
void pushArguements (FILE *outfile, treenode* root);
void libraryCallGenerator (FILE *outfile, int call, int reg);
void operatorCodeGenerator (FILE *outfile, char* op, int lt, int rt);
int functionGenerator (FILE *outfile, treenode* node);
int codeGenerator (FILE *outfile, treenode* node);

#endif