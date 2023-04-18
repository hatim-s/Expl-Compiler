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

int locationGenerator (FILE* outfile, treenode* node) {
    int reg = getReg ();
    if (node->nodetype == IDENTIFIER_NODE) 
        fprintf (outfile, "MOV R%d, %d\n", reg, getVariableLocation (node->varname));
    
    else if (node->nodetype == ARRAY_NODE && node->left->nodetype == VALUE_NODE) 
        fprintf (outfile, "MOV R%d, %d\n", reg, getVariableLocation (node->varname)+node->varvalue);
    
    else {
        reg = codeGenerator (outfile, node->left);
        int location = getVariableLocation (node->varname);

        fprintf (outfile, "ADD R%d, %d\n", reg, location);
    }
    return reg;             // reg contains the location address
}

/*Header generation happens here*/
void makeSymbolTableEntry (treenode* node, int type) {
    if (node == NULL) return;

    if (node->nodetype == IDENTIFIER_NODE) {
        char *var = (char*) malloc (sizeof (node->varname));
        strcpy (var, node->varname);
        addVariable (var, type, 1);
        return;
    }

    if (node->nodetype == ARRAY_NODE) {
        int size = node->varvalue;
        addVariable (node->varname, type, size);
        return;
    }

    makeSymbolTableEntry (node->left, type);
    makeSymbolTableEntry (node->right, type);
}

int declareVariables (treenode* node) {
    if (node == NULL) return 0;

    if (node->nodetype == CONNECTOR) {
        declareVariables (node->left);
        declareVariables (node->right);
    }
    
    makeSymbolTableEntry (node->right, node->left->vartype);
}

void printTable () {
    symtableNode *current = T.head;
    while (current) {
        printf ("%s ", current->var);
        printf ("%d ", current->location);
        printf ("%d ", current->type);
        current = current->next;
    }
    printf ("\n");
}

void headerGenerator (FILE *outfile){
    fprintf (outfile, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf (outfile, "MOV SP, %d\nBRKP\n", getNewLocation(0));
}

void libraryCallGenerator (FILE *outfile, int call, int reg){
    for (int i = 0; i < REG_COUNT; i++)
        if (registers [i] == REG_BUSY){
            fprintf (outfile, "PUSH R%d\n", i);
            freeReg (i);
        } 

    switch (call) {
        case READ_NODE:
            fprintf (outfile, "MOV R0, \"Read\"\nPUSH R0\n");
            fprintf (outfile, "MOV R0, -1\nPUSH R0\n");
            fprintf (outfile, "MOV R0, R%d\nPUSH R0\n", reg);
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
        if (registers [i] == REG_BUSY) {
            fprintf (outfile, "POP R%d\n", i);
            registers[i] = REG_BUSY;
        }
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

    if (node->nodetype == IDENTIFIER_NODE || node->nodetype == ARRAY_NODE) {
        int reg = locationGenerator (outfile, node);
        fprintf (outfile, "MOV R%d, [R%d]\n", reg, reg);
        return reg;
    }

    if (node->nodetype == VALUE_NODE) {
        int reg = getReg ();
        fprintf (outfile, "MOV R%d, %d\n", reg, node->varvalue);
        return reg;
    }

    if (node->nodetype == OPERATOR_NODE) {
        if (strcmp(node->varname, "=") == 0) {
            int rt = codeGenerator (outfile, node->right), lt = locationGenerator (outfile, node->left);
            fprintf (outfile, "MOV [R%d], R%d\n", lt, rt);

            freeReg (lt);
            freeReg (rt);
            return -1;
        }

        int lt = codeGenerator (outfile, node->left),
            rt = codeGenerator (outfile, node->right);

        operatorCodeGenerator (outfile, node->varname, lt, rt);
        freeReg (rt);

        return lt;
    }

    if (node->nodetype == WRITE_NODE || node->nodetype == READ_NODE) {
        int reg = (node->nodetype == WRITE_NODE) ? codeGenerator (outfile, node->left) : locationGenerator (outfile, node->left);
        int reg2 = -1;

        if (reg == 0) {
            reg2 = getReg ();        
            fprintf (outfile, "MOV R%d, R0\n", reg2);
        }

        libraryCallGenerator (outfile, node->nodetype, reg == 0 ? reg2 : reg);
        
        if (reg2 != -1) freeReg (reg2);
        freeReg (reg);
        return -1;
    }

    if (node->nodetype == CONDITIONAL_NODE && node->varvalue == IF_NODE) {
        int label1 = getLabel (), label2 = getLabel ();
        int lt = codeGenerator (outfile, node->left);
        // printf ("lt: %d\n", lt);
        fprintf (outfile, "JZ R%d, LBL%d\n", lt, label1);
        freeReg (lt);
        // printf ("lt freed\n");


        // int lrt = codeGenerator (outfile, node->right->left);
        codeGenerator (outfile, node->right->left);
        fprintf (outfile, "JMP LBL%d\n", label2);
        // freeReg (lrt);
        
        fprintf (outfile, "LBL%d:\n", label1);

        // int lrrt;
        if (node->right->right != NULL)
            // lrrt = codeGenerator (outfile, node->right->right->left);
            codeGenerator (outfile, node->right->right->left);

        fprintf (outfile, "LBL%d:\n", label2);
        // freeReg (lrrt);
    }

    if (node->nodetype == CONDITIONAL_NODE && node->varvalue == WHILE_NODE) {
        int label1 = getLabel (), label2 = getLabel ();
        pushStack (label1, label2);

        fprintf (outfile, "LBL%d:\n", label1);

        int lt = codeGenerator (outfile, node->left);
        // printf ("lt: %d\n", lt);
        fprintf (outfile, "JZ R%d, LBL%d\n", lt, label2);
        freeReg (lt);
        // printf ("lt freed\n");

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