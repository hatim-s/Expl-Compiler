#include "codegen.h"

/*Code Generation Happens Here*/

int locationGenerator (FILE* outfile, treenode* node) {
    int reg = getReg ();

    if (node->nodetype == IDENTIFIER_NODE) {
        int loc = getLVariableLocation (node->varname);
        if (loc != 0) {
            fprintf (outfile, "MOV R%d, BP\n", reg);
            fprintf (outfile, "ADD R%d, %d\n", reg, loc);
        }
        else 
            fprintf (outfile, "MOV R%d, %d\n", reg, getGVariableLocation (node->varname));

        return reg;
    }
    
    else if (node->nodetype == ARRAY_NODE && node->left->nodetype == VALUE_NODE) {
        fprintf (outfile, "MOV R%d, %d\n", reg, getGVariableLocation (node->varname)+node->varvalue);
        return reg;
    }

    freeReg (reg);
    
    // else if (node->nodetype == ARRAY_NODE && node->left->nodetype == CONNECTOR/IDENTIFIER_NODE/ARRAY_NODE)
    reg = codeGenerator (outfile, node->left);
    fprintf (outfile, "ADD R%d, %d\n", reg, getGVariableLocation (node->varname));

    return reg;
}

void pushArguements (FILE *outfile, treenode* root) {
    if (root == NULL) return;

    if (root->nodetype == CONNECTOR) {
        pushArguements (outfile, root->right);
        pushArguements (outfile, root->left);
        return;
    }

    // argCount++;
    int reg = codeGenerator (outfile, root);
    fprintf (outfile, "PUSH R%d\n", reg);
    freeReg (reg);
}

void popArguements (FILE *outfile, treenode* root) {
    if (root == NULL) return;

    if (root->nodetype == CONNECTOR) {
        popArguements (outfile, root->right);
        popArguements (outfile, root->left);
        return;
    }

    // argCount++;
    // int reg = codeGenerator (outfile, root);
    fprintf (outfile, "POP R0\n");
    // freeReg (reg);
}

void libraryCallGenerator (FILE *outfile, int call, int reg) {
    int regArr [REG_COUNT];
    for (int i = 0; i < REG_COUNT; i++) 
        regArr [i] = registers [i];

    for (int i = 1; i < REG_COUNT; i++)
        if (regArr [i] == REG_BUSY){
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

    for (int i = REG_COUNT - 1; i > 0; i--)
        if (regArr [i] == REG_BUSY) {
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
        cases ("&&")
            int label1 = getLabel (), label2 = getLabel ();

            fprintf (outfile, "MUL R%d, R%d\n", lt, rt); 
            fprintf (outfile, "JNZ R%d, LBL%d\n", lt, label1);
            fprintf (outfile, "MOV R%d, 0\n", lt);
            fprintf (outfile, "JMP LBL%d\n", label2);
            fprintf (outfile, "LBL%d:\n", label1);
            fprintf (outfile, "MOV R%d, 1\n", lt);
            fprintf (outfile, "LBL%d:\n", label2);
            
            break;

        cases ("||")
            int label1 = getLabel (), label2 = getLabel ();

            fprintf (outfile, "MUL R%d, R%d\n", lt, rt); 
            fprintf (outfile, "JNZ R%d, LBL%d\n", lt, label1);
            fprintf (outfile, "MOV R%d, 0\n", lt);
            fprintf (outfile, "JMP LBL%d\n", label2);
            fprintf (outfile, "LBL%d:\n", label1);
            fprintf (outfile, "MOV R%d, 1\n", lt);
            fprintf (outfile, "LBL%d:\n", label2);            
            
            break;

        cases ("~")
            int label1 = getLabel (), label2 = getLabel ();

            fprintf (outfile, "JZ R%d, LBL%d\n", lt, label1);
            fprintf (outfile, "MOV R%d, 0\n", lt);
            fprintf (outfile, "JMP LBL%d\n", label2);
            fprintf (outfile, "LBL%d:\n", label1);
            fprintf (outfile, "MOV R%d, 1\n", lt);
            fprintf (outfile, "LBL%d:\n", label2);

            fprintf (outfile, "\n", lt, rt); break;
    
        defaults
            printf ("Incorrect operator\n");
            freeReg (lt);
            freeReg (rt);
            break;
    } switchs_end;
}

int functionGenerator (FILE *outfile, treenode* node) {
    int regArr [REG_COUNT], reg = 0;
    for (int i = 1; i < REG_COUNT; i++) {
        regArr [i] = registers [i];
        if (regArr[i] == REG_BUSY) reg = i;
    }
    reg++;
    

    if (node->varvalue == FUNC_CALL) {
        for (int i = 1; i < REG_COUNT; i++) 
            if (regArr [i] == REG_BUSY) {
                fprintf (outfile, "PUSH R%d\n", i);
                freeReg (i);
            }

        pushArguements (outfile, node->left);

        fprintf (outfile, "PUSH R0\n");
        fprintf (outfile, "CALL FUNC%d\n", getFunctionLabel (node->varname));

        registers[reg] = REG_BUSY;
        fprintf (outfile, "POP R%d\n", reg);

        popArguements (outfile, node->left);
        // argCount++; while (--argCount) fprintf (outfile, "POP R0\n");

        for (int i = REG_COUNT - 1; i > 0; i--) 
            if (regArr [i] == REG_BUSY) {
                fprintf (outfile, "POP R%d\n", i);
                registers [i] = REG_BUSY;
            }

        return reg;
    }

    else if (node->varvalue == FUNC_DEF) {
        fprintf (outfile, "FUNC%d:\n", getFunctionLabel (node->varname));
        fprintf (outfile, "PUSH BP\n");
        fprintf (outfile, "MOV BP, SP\n");

        setStaticBinding (node->left);

        LSymtableNode* current = t.head;
        while (current) {
            fprintf (outfile, "PUSH R0\n");
            current = current->next;
        }

        int reg = codeGenerator (outfile, node->right);
        int reg2 = getReg ();

        fprintf (outfile, "MOV R%d, BP\n", reg2);
        fprintf (outfile, "SUB R%d, 2\n", reg2);

        fprintf (outfile, "MOV [R%d], R%d\n", reg2, reg);
        
        freeReg (reg), freeReg (reg2);

        current = t.head;
        while (current) {
            fprintf (outfile, "POP R0\n");
            current = current->next;
        }

        fprintf (outfile, "POP BP\nRET\n");
    }
}

int codeGenerator (FILE *outfile, treenode* node) {
    if (node == NULL) return -1;

    if (node->nodetype == CONNECTOR){
        codeGenerator (outfile, node->left);
        return codeGenerator (outfile, node->right);
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

            freeReg (rt), freeReg (lt);
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
        libraryCallGenerator (outfile, node->nodetype, reg);
        freeReg (reg);

        return -1;
    }

    if (node->nodetype == CONDITIONAL_NODE && node->varvalue == IF_NODE) {
        int label1 = getLabel (), label2 = getLabel ();

        int lt = codeGenerator (outfile, node->left);
        fprintf (outfile, "JZ R%d, LBL%d\n", lt, label1);
        freeReg (lt);

        codeGenerator (outfile, node->right->left);
        fprintf (outfile, "JMP LBL%d\n", label2);
        
        fprintf (outfile, "LBL%d:\n", label1);

        if (node->right->right != NULL) codeGenerator (outfile, node->right->right->left);

        fprintf (outfile, "LBL%d:\n", label2);

        return -1;
    }

    if (node->nodetype == CONDITIONAL_NODE && node->varvalue == WHILE_NODE) {
        int label1 = getLabel (), label2 = getLabel ();
        pushStack (label1, label2);

        fprintf (outfile, "LBL%d:\n", label1);

        int lt = codeGenerator (outfile, node->left);
        fprintf (outfile, "JZ R%d, LBL%d\n", lt, label2);
        freeReg (lt);

        int rlt = codeGenerator (outfile, node->right->left);
        fprintf (outfile, "JMP LBL%d\n", label1);
        fprintf (outfile, "LBL%d:\n", label2);

        popStack ();

        return -1;
    }

    if (node->nodetype == BREAK_NODE) {
        int label2 = peekStack()->label2;
        fprintf (outfile, "JMP LBL%d\n", label2);

        return -1;
    }

    if (node->nodetype == CONTINUE_NODE) {
        int label1 = peekStack()->label1;
        fprintf (outfile, "JMP LBL%d\n", label1);
        
        return -1;
    }

    if (node->nodetype == FUNCTION_NODE) {
        return functionGenerator (outfile, node);
    }

    if (node->nodetype == RETURN_NODE) {
        return codeGenerator (outfile, node->left);
    }

    return -1;
}