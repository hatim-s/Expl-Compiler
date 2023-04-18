#ifndef symtab
#define symtab

#include "headers.h"

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

int getNewLocation (int size) { 
    static int loc = 4096; 
    int temp = loc; loc += size; 
    return temp; 
}

int getNewFunction () { 
    static int flable = 0; 
    return flable++; 
}

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

bool matchParameters (parameterList* symTableParams, treenode* funcParams) {
    parameterList* current1 = symTableParams;
    treenode* current2 = funcParams;

    while (current1 && current2) {
        if (strcmp (current1->name, current2->varname) != 0 || current1->type != current2->vartype) return false;
        current1 = current1->next;
        current2 = current2->left;
    }

    return true;
}

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

    printf ("Error: undeclared variable/function used : %s\n", variable); exit (1);
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
    
    printf ("Error: undeclared variable/function used : %s\n", variable); exit (1);
}

int getFunctionLabel (char* variable) {
    GSymtableNode* current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->flable;
        current = current->next;
    }
    
    printf ("Error: undeclared function used : %s\n", variable); exit (1);
}

parameterList* getFunctionParameters (char* variable) {
    GSymtableNode *current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->param;
        current = current->next;
    }
    
    printf ("Error: undeclared function used : %s\n", variable); exit (1);
}

#endif