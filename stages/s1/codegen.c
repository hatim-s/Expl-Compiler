#include "headers.h"

/*Header generation happens here*/
void headerGenerator (){
    FILE *outfile = fopen ("./output.xsm", "w");
    fprintf (outfile, "0\n2056\n0\n0\n0\n0\n0\n0\nBRKP\n");
    fclose (outfile);
}

void printGenerator (int reg){
    FILE *outfile = fopen ("./output.xsm", "a");
    // fprintf (outfile, "MOV R%d, [R%d]\n", reg, reg);
    fprintf (outfile, "MOV [4096], R%d\n", reg);

    for (int i = 0; i < REG_COUNT; i++)
        if (registers [i] == REG_BUSY) fprintf (outfile, "PUSH R%d\n", i);

    fprintf (outfile, "MOV R0, \"Write\"\nPUSH R0\n");
    fprintf (outfile, "MOV R0, -1\nPUSH R0\n");
    fprintf (outfile, "MOV R0, [4096]\nPUSH R0\n");
    fprintf (outfile, "PUSH R0\nPUSH R0\nCALL 0\n");
    fprintf (outfile, "POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");

    for (int i = REG_COUNT - 1; i >= 0; i--)
        if (registers [i] == REG_BUSY) fprintf (outfile, "POP R%d\n", i);

    fclose (outfile);
}

/*Code Generation Happens Here*/

int registerInit () {
    for (int i = 0; i < REG_COUNT; i++) registers[i] = REG_FREE;
}

int getReg () {
    for (int i = 0; i < REG_COUNT; i++)
        if (registers [i] == REG_FREE) {
            registers [i] = REG_BUSY;
            return i; 
        }
    return -1;
}

void freeReg (int regNo) {
    registers [regNo] = REG_FREE;
}

int codeGenerate (treenode* node) {
    if (node == NULL) return -1;

    if (node->oprtr == NULL){
        int reg = getReg ();
        if (reg == -1) return -1;

        FILE *outfile = fopen ("./output.xsm", "a");
        fprintf (outfile, "MOV R%d, %d\n", reg, node->value);
        fclose (outfile);

        return reg;
    }
    
    int lt = codeGenerate (node->left), 
        rt = codeGenerate (node->right);
    
    FILE *outfile = fopen ("./output.xsm", "a");
    switch (*(node->oprtr)){
        case '+':
            fprintf (outfile, "ADD R%d, R%d\n", lt, rt);
            break;
        
        case '-':
            fprintf (outfile, "SUB R%d, R%d\n", lt, rt);
            break;
        
        case '*':
            fprintf (outfile, "MUL R%d, R%d\n", lt, rt);
            break;
        
        case '/':
            fprintf (outfile, "DIV R%d, R%d\n", lt, rt);
            break;
        
        default:
            printf ("Incorrect operator\n");
            freeReg (lt);
            freeReg (rt);
            return -1;
    }

    fclose (outfile);
    freeReg (rt);
    return lt;
}