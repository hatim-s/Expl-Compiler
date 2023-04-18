#ifndef symtab
#define symtab

#include "headers.h"
// #include "tree.c"
// #include "functions.c"

GSymtable T;
LSymTable t;

void initializeGTable () { T.head = NULL; }

void initializeLTable () {
    LSymtableNode *current = t.head;
    LSymtableNode *prev = t.head;
    
    while (current) {
        current = current->next;
        free (prev);
        prev = current;
    }

    t.head = NULL;
}

int getNewLocation (int size) { static int loc = 4096; int temp = loc; loc += size; return temp; }
int getNewFunction () { static int flable = 0; return flable++; }

void setStaticBinding (treenode* node) {
    LSymtableNode* current = t.head;
    treenode* current2 = node;
    int binding = -3;
    
    while (current2) {
        current->location = binding--;
        current2 = current2->left, current = current->next;
    }

    binding = 1;
    while (current) {
        current->location = binding++;
        current = current->next;
    }
}

bool matchParameters (parameterList* symTableParams, treenode* funcParams);

// ----------------------------------------------------- Parameter List from Tree Creation ----------------------------------------------------

parameterList* createListNode (int type, char* name);
parameterList* makeParamList (treenode* root);

// ----------------------------------------------------- Global Symbol Table Creation ----------------------------------------------------

GSymtableNode* createGTableNode (char* name, int type, int location, int size, parameterList* param, int flable);
void addGVariable (char* name , int type, int size);
void addGFunction (char* name , int type, treenode* param);
void makeGSymbolTableEntry (treenode* node, int type);
int declareGVariables (treenode* node);

// -------------------------------------------------------- Local Symbol Table Creation -------------------------------------------------------

LSymtableNode* createLTableNode (char* name, int type, int location);
void addLVariable (char* name , int type);
void makeLSymbolTableEntry (treenode* node, int type);
void declareLVariables (treenode* node);


// ------------------------------------------------- Variable/Function Queries -----------------------------------------------------------------

int getLVariableLocation (char* variable) {
    LSymtableNode* current = t.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->location;
        current = current->next;
    } return 0;
}

int getGVariableLocation (char* variable) {
    GSymtableNode* current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->location;
        current = current->next;
    }

    printf ("Error: undeclared variable/function used : %s\n", variable); exit (0);
}

int getVariableType (char* variable) {
    LSymtableNode *node = t.head;
    while (node) {
        if (strcmp (node->name, variable) == 0) return node->type;
        node = node->next;
    }

    GSymtableNode* current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->type;
        current = current->next;
    }
    
    printf ("Error: undeclared variable/function used : %s\n", variable); exit (0);
}

int getFunctionLabel (char* variable) {
    GSymtableNode* current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->flable;
        current = current->next;
    }
    
    printf ("Error: undeclared function used : %s\n", variable); exit (0);
}

parameterList* getFunctionParameters (char* variable) {
    GSymtableNode *current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->param;
        current = current->next;
    }
    
    printf ("Error: undeclared function used : %s\n", variable); exit (0);
}

#endif