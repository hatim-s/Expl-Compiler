#include "codegen.h"

/*Code Generation Happens Here*/

int registerInit () {
    for (int i = 0; i < REG_COUNT; i++) registers[i] = REG_FREE;
    initialiseStack ();
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

int getVariableLoc (char* c) {
    return 4096 + *c - 'a';
}

int getLabel () {
    static int l = 0;
    return l++;
}

/*Header generation happens here*/
void headerGenerator (FILE *outfile){
    fprintf (outfile, "0\n2056\n0\n0\n0\n0\n0\n0\nBRKP\n");
    fprintf (outfile, "MOV SP, %d\n", 4096+26);
}

void libraryCallGenerator (FILE *outfile, int reg, int call){
    for (int i = 0; i < REG_COUNT; i++)
        if (registers [i] == REG_BUSY) fprintf (outfile, "PUSH R%d\n", i);

    switch (call) {
        case READ_NODE:
            fprintf (outfile, "MOV R0, \"Read\"\nPUSH R0\n");
            fprintf (outfile, "MOV R0, -1\nPUSH R0\n");
            fprintf (outfile, "MOV R0, %d\nPUSH R0\n", reg);
            break;

        case WRITE_NODE:
            fprintf (outfile, "MOV R0, \"Write\"\nPUSH R0\n");
            fprintf (outfile, "MOV R0, -2\nPUSH R0\n");
            fprintf (outfile, "MOV R0, R%d\nPUSH R0\n", reg);
            break;

        default:
            break;
    }

    fprintf (outfile, "PUSH R0\nPUSH R0\nCALL 0\n");
    fprintf (outfile, "POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");

    for (int i = REG_COUNT - 1; i >= 0; i--)
        if (registers [i] == REG_BUSY) fprintf (outfile, "POP R%d\n", i);
}

void operatorCodeGenerator (FILE *outfile, char* op, int lt, int rt) {
    switchs (op){
        cases ("+")
            fprintf (outfile, "ADD R%d, R%d\n", lt, rt); break;
        cases ("-")
            fprintf (outfile, "SUB R%d, R%d\n", lt, rt); break;
        cases ("*")
            fprintf (outfile, "MUL R%d, R%d\n", lt, rt); break;
        cases ("/")
            fprintf (outfile, "DIV R%d, R%d\n", lt, rt); break;
        cases ("=")
            fprintf (outfile, "MOV [%d], R%d\n", lt, rt); break;
        cases ("<")
            fprintf (outfile, "LT R%d, R%d\n", lt, rt); break;
        cases (">")
            fprintf (outfile, "GT R%d, R%d\n", lt, rt); break;
        cases ("==")
            fprintf (outfile, "EQ R%d, R%d\n", lt, rt); break;
        cases ("!=")
            fprintf (outfile, "NE R%d, R%d\n", lt, rt); break;
        cases ("<=")
            fprintf (outfile, "LE R%d, R%d\n", lt, rt); break;
        cases (">=")
            fprintf (outfile, "GE R%d, R%d\n", lt, rt); break;
    
        defaults
            printf ("Incorrect operator\n");
            freeReg (lt);
            freeReg (rt);
            break;
    } switchs_end;
}

int codeGenerator (FILE *outfile, treenode* node) {
    if (node == NULL) return -1;

    if (node->nodetype == CONNECTOR){
        codeGenerator (outfile, node->left);
        codeGenerator (outfile, node->right);

        return -1;
    }

    if (node->nodetype == WRITE_NODE) {
        int reg = codeGenerator (outfile, node->left);
        int reg2 = getReg ();

        if (reg == 0) {        
            fprintf (outfile, "MOV R%d, R0\n", reg2);
        }

        libraryCallGenerator (outfile, reg == 0 ? reg2 : reg, node->nodetype);
        
        freeReg (reg2);
        freeReg (reg);
        return -1;
    }

    if (node->nodetype == READ_NODE) {
        libraryCallGenerator (outfile, getVariableLoc (node->left->varname), node->nodetype);
    }

    if (node->nodetype == VALUE_NODE) {
        int reg = getReg ();
        if (reg == -1) {
            printf ("registers exhausted\n");
            exit (0);
        }
        
        fprintf (outfile, "MOV R%d, %d\n", reg, node->varvalue);
        
        return reg;
    }

    if (node->nodetype == OPERATOR_NODE) {
        int lt = (strcmp(node->varname, "=") == 0) ? getVariableLoc (node->left->varname) : codeGenerator (outfile, node->left); 
        int rt = codeGenerator (outfile, node->right);

        operatorCodeGenerator (outfile, node->varname, lt, rt);
        freeReg (rt);

        return lt;
    }

    if (node->nodetype == IDENTIFIER_NODE) {
        int reg = getReg ();
        fprintf (outfile, "MOV R%d, [%d]\n", reg, getVariableLoc (node->varname));
        return reg;
    }

    if (node->nodetype == CONDITIONAL_NODE && node->varvalue == IF_NODE) {
        int label1 = getLabel (), label2 = getLabel ();
        int lt = codeGenerator (outfile, node->left);
        fprintf (outfile, "JZ R%d, LBL%d\n", lt, label1);

        int lrt = codeGenerator (outfile, node->right->left);
        fprintf (outfile, "JMP LBL%d\n", label2);
        
        fprintf (outfile, "LBL%d:\n", label1);

        int lrrt;
        if (node->right->right != NULL)
            lrrt = codeGenerator (outfile, node->right->right->left);

        fprintf (outfile, "LBL%d:\n", label2);
    }

    if (node->nodetype == CONDITIONAL_NODE && node->varvalue == WHILE_NODE) {
        int label1 = getLabel (), label2 = getLabel ();
        pushStack (label1, label2);

        fprintf (outfile, "LBL%d:\n", label1);

        int lt = codeGenerator (outfile, node->left);
        fprintf (outfile, "JZ R%d, LBL%d\n", lt, label2);

        int rlt = codeGenerator (outfile, node->right->left);
        fprintf (outfile, "JMP LBL%d\n", label1);
        fprintf (outfile, "LBL%d:\n", label2);

        popStack ();
    }

    if (node->nodetype == BREAK_NODE) {
        int label2 = peekStack()->label2;
        fprintf (outfile, "JMP LBL%d\n", label2);
    }

    if (node->nodetype == CONTINUE_NODE) {
        int label1 = peekStack()->label1;
        fprintf (outfile, "JMP LBL%d\n", label1);
    }

    return -1;
}