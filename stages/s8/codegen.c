#include "codegen.h"

/*Code Generation Happens Here*/

int locationGenerator (FILE* outfile, TreeNode* node) {
    int reg = getReg ();

    if (node->nodetype == IDENTIFIER_NODE || node->nodetype == SELF_NODE) {
        int loc = getLVariableLocation (node->varname);

        if (loc != 0) {         // local variable
            fprintf (outfile, "MOV R%d, BP\n", reg);
            fprintf (outfile, "ADD R%d, %d\n", reg, loc);

            if (node->nodetype == SELF_NODE) 
                fprintf (outfile, "MOV R%d, [R%d]\n", reg, reg);
        }
        else                    // global variable
            fprintf (outfile, "MOV R%d, %d\n", reg, getVariableLocation (node->varname));

        // field location generator
        TreeNode* current = node->left;
        while (current) {
            fprintf (outfile, "MOV R%d, [R%d]\n", reg, reg);
            fprintf (outfile, "ADD R%d, %d\n", reg, current->varvalue);
            current = current->left;
        }

        return reg;
    }
    
    else if (node->nodetype == ARRAY_NODE && node->left->nodetype == VALUE_NODE) {
        fprintf (outfile, "MOV R%d, %d\n", reg, getVariableLocation (node->varname) + node->varvalue);
        return reg;
    }

    freeReg (reg);
    
    // else if (node->nodetype == ARRAY_NODE && node->left->nodetype == EXPRESSION)
    reg = codeGenerator (outfile, node->left);
    fprintf (outfile, "ADD R%d, %d\n", reg, getVariableLocation (node->varname));

    return reg;
}

void pushArguements (FILE *outfile, TreeNode* root) {
    if (root == NULL) return;

    if (root->nodetype == CONNECTOR) {
        pushArguements (outfile, root->right);
        pushArguements (outfile, root->left);
        return;
    }

    int reg = codeGenerator (outfile, root);
    fprintf (outfile, "PUSH R%d\n", reg);
    freeReg (reg);
}

void popArguements (FILE *outfile, TreeNode* root) {
    if (root == NULL) return;

    if (root->nodetype == CONNECTOR) {
        popArguements (outfile, root->right);
        popArguements (outfile, root->left);
        return;
    }

    fprintf (outfile, "POP R0\n");
}

int libraryCallGenerator (FILE *outfile, int call, int reg1) {
    int regArr [REG_COUNT];
    for (int i = 1; i < REG_COUNT; i++) 
        regArr [i] = registers [i];


    int regRet = 0;
    for (int i = 1; i < REG_COUNT; i++)
        if (regArr [i] == REG_BUSY){
            fprintf (outfile, "PUSH R%d\n", i);
            freeReg (i);
            regRet = i;
        }
    regRet++;

    switch (call) {
        case READ_NODE:
            fprintf (outfile, "MOV R0, \"Read\"\nPUSH R0\n");
            fprintf (outfile, "MOV R0, -1\nPUSH R0\n");
            fprintf (outfile, "MOV R0, R%d\nPUSH R0\n", reg1);
            break;

        case WRITE_NODE:
            fprintf (outfile, "MOV R0, \"Write\"\nPUSH R0\n");
            fprintf (outfile, "MOV R0, -2\nPUSH R0\n");
            fprintf (outfile, "MOV R0, R%d\nPUSH R0\n", reg1);
            break;

        case INIT_NODE:
            fprintf (outfile, "MOV R0, \"Heapset\"\nPUSH R0\n");
            fprintf (outfile, "PUSH R0\n");
            fprintf (outfile, "PUSH R0\n");
            break;

        case ALLOC_NODE:
            fprintf (outfile, "MOV R0, \"Alloc\"\nPUSH R0\n");
            fprintf (outfile, "PUSH R0\n");
            fprintf (outfile, "PUSH R0\n");
            break;

        default:
            break;
    }

    fprintf (outfile, "PUSH R0\nPUSH R0\nCALL 0\n");

    if (call == ALLOC_NODE || call == INIT_NODE) {
        // reg1 = regRet;
        registers [regRet] = REG_BUSY;
        fprintf (outfile, "POP R%d\n", regRet);
    }
    else fprintf (outfile, "POP R0\n");
    
    fprintf (outfile, "POP R0\nPOP R0\nPOP R0\nPOP R0\n");

    for (int i = REG_COUNT - 1; i > 0; i--)
        if (regArr [i] == REG_BUSY) {
            fprintf (outfile, "POP R%d\n", i);
            registers[i] = REG_BUSY;
        }

    return regRet;
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
    
        defaults
            printf ("Incorrect operator\n");
            freeReg (lt);
            freeReg (rt);
            break;
    } switchs_end;
}

int functionGenerator (FILE *outfile, TreeNode* node) {
    int regArr [REG_COUNT], reg = 0;
    for (int i = 1; i < REG_COUNT; i++) {
        regArr [i] = registers [i];
        if (regArr[i] == REG_BUSY) reg = i;
    }
    reg++;
    
    if (node->varvalue == FUNC_CALL || node->varvalue == METHOD_CALL) {
        for (int i = 1; i < REG_COUNT; i++) 
            if (regArr [i] == REG_BUSY) {
                fprintf (outfile, "PUSH R%d\n", i);
                freeReg (i);
            }

        if (node->varvalue == METHOD_CALL) {
            pushArguements (outfile, node->right);

            int reg2 = locationGenerator (outfile, node->left);
            // fprintf (outfile, "MOV R%d, [R%d]\n", reg2, reg2);
            fprintf (outfile, "PUSH R%d\n", reg2);
            freeReg (reg2);
        }
        else pushArguements (outfile, node->left);

        fprintf (outfile, "PUSH R0\n");

        if (node->varvalue == FUNC_CALL) fprintf (outfile, "CALL FUNC%d\n", getGVariable(node->varname)->funcLabel);
        else {
            int methodIndex = getMethodFromClass (node->varname, node->classtype)->methodIndex;
            
            int regFuncCall = locationGenerator (outfile, node->left);
            // if (node->left->nodetype == SELF_NODE) fprintf (outfile, "MOV R%d, [R%d]\n", regFuncCall, regFuncCall);
            
            fprintf (outfile, "ADD R%d, 1\n", regFuncCall);
            fprintf (outfile, "MOV R%d, [R%d]\n", regFuncCall, regFuncCall);
            fprintf (outfile, "ADD R%d, %d\n", regFuncCall, methodIndex);
            fprintf (outfile, "MOV R%d, [R%d]\n", regFuncCall, regFuncCall);
            
            fprintf (outfile, "CALL R%d\n", regFuncCall);
            freeReg (regFuncCall);
        }

        registers[reg] = REG_BUSY;
        fprintf (outfile, "POP R%d\n", reg);

        if (node->nodetype == METHOD_NODE) {
            fprintf (outfile, "POP R0\n");
            popArguements (outfile, node->right);
        }
        else popArguements (outfile, node->left);

        for (int i = REG_COUNT - 1; i > 0; i--) 
            if (regArr [i] == REG_BUSY) {
                fprintf (outfile, "POP R%d\n", i);
                registers [i] = REG_BUSY;
            }
    }

    else if (node->varvalue == FUNC_DEF || node->varvalue == METHOD_DEF) {
        if (node->varvalue == FUNC_DEF) 
            fprintf (outfile, "FUNC%d:\n", getGVariable(node->varname)->funcLabel);
        else 
            fprintf (outfile, "FUNC%d:\n", getMethod (node->varname)->funcLabel);

        fprintf (outfile, "PUSH BP\n");
        fprintf (outfile, "MOV BP, SP\n");

        int key = node->varvalue == FUNC_DEF ? -3 : -4;
        setStaticBinding (node->left, key);

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

    return reg;
}

int codeGenerator (FILE *outfile, TreeNode* node) {
    if (node == NULL) return -1;

    if (node->nodetype == CONNECTOR){
        codeGenerator (outfile, node->left);
        return codeGenerator (outfile, node->right);
    }

    if (node->nodetype == IDENTIFIER_NODE || node->nodetype == ARRAY_NODE || node->nodetype == SELF_NODE) {
        int reg = locationGenerator (outfile, node);
        fprintf (outfile, "MOV R%d, [R%d]\n", reg, reg);
        return reg;
    }

    if (node->nodetype == VALUE_NODE) {
        int reg = getReg ();
        fprintf (outfile, "MOV R%d, %d\n", reg, node->varvalue);
        return reg;
    }

    if (node->nodetype == STRING_NODE) {
        int reg = getReg ();
        fprintf (outfile, "MOV R%d, %s\n", reg, node->varname);
        return reg;
    }

    if (node->nodetype == NULL_NODE) {
        int reg = getReg ();
        fprintf (outfile, "MOV R%d, %d\n", reg, 0);
        return reg;
    }

    if (node->nodetype == OPERATOR_NODE) {
        if (strcmp(node->varname, "=") == 0) {
            int rt = codeGenerator (outfile, node->right), lt = locationGenerator (outfile, node->left);
            fprintf (outfile, "MOV [R%d], R%d\n", lt, rt);

            if (node->right->nodetype == CLASS_NODE && node->right->varvalue == NEW_NODE) {
                fprintf (outfile, "ADD R%d, 1\n", lt);
                fprintf (outfile, "MOV [R%d], %d\n", lt, node->right->classtype->classIndex);
            }

            else if (node->left->classtype && node->right->classtype) {
                freeReg (rt);
                rt = locationGenerator (outfile, node->right);
                fprintf (outfile, "ADD R%d, 1\n", rt);
                fprintf (outfile, "ADD R%d, 1\n", lt);
                fprintf (outfile, "MOV R%d, [R%d]\n", rt, rt);
                fprintf (outfile, "MOV [R%d], R%d\n", lt, rt);
                
            }

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

    if (node->nodetype == HEAP_NODE) {
        return libraryCallGenerator (outfile, node->varvalue, -1);
    }

    if (node->nodetype == METHOD_NODE) {
        return functionGenerator (outfile, node);
    }

    if (node->nodetype == CLASS_NODE) {
        int reg = codeGenerator (outfile, node->left);
        // int reg2 = getVariableLocation ();
        return reg;
    }

    return -1;
}