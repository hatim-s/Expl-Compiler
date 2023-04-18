#ifndef codegen
#define codegen

#include "stack.c"
// #include "tree.c"

#define REG_COUNT 20
#define REG_BUSY 0
#define REG_FREE 1
#define REG_LOCKED 2

#define VAR_COUNT 26

int registers [REG_COUNT];
int variables [VAR_COUNT];

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
    static int lbl = 0;
    return lbl++;
}

void headerGenerator (FILE *outfile){
    fprintf (outfile, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf (outfile, "JMP MAIN\n");
}

void stackPointerGenerator (FILE *outfile) {
    fprintf (outfile, "MOV SP, %d\n", getNewLocation(0)-1);
    fprintf (outfile, "MOV BP, %d\nBRKP\n", getNewLocation(0)-1);
}

void methodInitGenerator (FILE *outfile) {
    ClassTable *current = CT;
    while (current) {
        MethodList *current2 = current->methods;
        while (current2) {
            fprintf (outfile, "MOV [%d], FUNC%d\n", 
                    (current->classIndex + current2->methodIndex), 
                    current2->funcLabel);
            current2 = current2->next;
        }
        current = current->next;
    }
}

/* ------------------------------------------------------------------ Other function declarations ------------------------------------------------------------------ */

int locationGenerator (FILE* outfile, TreeNode* node);
void pushArguements (FILE *outfile, TreeNode* root);
int libraryCallGenerator (FILE *outfile, int call, int reg);
void operatorCodeGenerator (FILE *outfile, char* op, int lt, int rt);
int functionGenerator (FILE *outfile, TreeNode* node);
int codeGenerator (FILE *outfile, TreeNode* node);

#endif