#ifndef symtab
#define symtab

#include "headers.h"
// #include "type.h"

GSymtable T;
LSymTable t;

int lineNo;

int getNewLocation (int size) { 
    static int loc = 4096; 
    int temp = loc; loc += size; 
    return temp; 
}

int getNewFunction () { 
    static int func = 0; 
    return func++; 
}

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

void setStaticBinding (TreeNode* node, int key) {
    LSymtableNode* current = t.head;
    TreeNode* current2 = node;
    int binding = key;
    
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

bool matchParameters (ParameterList* symTableParams, TreeNode* funcParams) {
    ParameterList* current1 = symTableParams;
    TreeNode* current2 = funcParams;

    while (current1 && current2) {
        if (strcmp (current1->name, current2->varname) != 0 || current1->type != current2->datatype) return false;
        current1 = current1->next;
        current2 = current2->left;
    }

    return true;
}

// ----------------------------------------------------- Parameter List from Tree Creation ----------------------------------------------------

ParameterList* createListNode (TypeTable *type, char* name) {
    ParameterList* lst = (ParameterList*) malloc (sizeof (ParameterList));
    
    lst->name = (char*) malloc (sizeof(char) * strlen(name));
    strcpy (lst->name, name);
    lst->type = type, lst->next = NULL;

    return lst;
}

ParameterList* makeParamList (TreeNode* root) {
    if (root == NULL) return NULL;

    TreeNode* current1 = NULL;
    ParameterList *param = NULL, *current2 = NULL;

    param = createListNode (root->datatype, root->varname);
    current2 = param;
    current1 = root->left;

    while (current1 != NULL) {
        current2->next = createListNode (current1->datatype, current1->varname);
        current1 = current1->left;
        current2 = current2->next;
    }

    return param;
}

// ------------------------------------------------- Variable/Function Queries -----------------------------------------------------------------

LSymtableNode* getLVariable (char *variable) {
    LSymtableNode *current = t.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared local variable used : %s\n", variable);
    exit (1);
}

GSymtableNode* getGVariable (char *variable) {
    GSymtableNode *current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared global variable used : %s\n", variable);
    exit (1);
}

TypeTable* getVariableType (char* variable) {
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

ClassTable* getVariableClassType (char *variable) {
    GSymtableNode *current = T.head;
    while (current) {
        if (strcmp (current->name, variable) == 0) return current->classtype;
        current = current->next;
    }

    return NULL;
}

int getLVariableLocation (char *variable) {
    if (strcmp (variable, "SELF") == 0) return -3;

    LSymtableNode *node = t.head;
    while (node) {
        if (strcmp (node->name, variable) == 0) return node->location;
        node = node->next;
    }
    return 0;
}

int getGVariableLocation (char *variable) {
    GSymtableNode *node = T.head;
    while (node) {
        if (strcmp (node->name, variable) == 0) return node->location;
        node = node->next;
    }

    printf ("Error: undeclared variable/function used : %s\n", variable); exit (1);
}

// int getVariableLocation (char *variable) {
//     LSymtableNode *node = t.head;
//     while (node) {
//         if (strcmp (node->name, variable) == 0) return node->location;
//         node = node->next;
//     }

//     GSymtableNode* current = T.head;
//     while (current) {
//         if (strcmp (current->name, variable) == 0) return current->location;
//         current = current->next;
//     }
    
//     printf ("Error: undeclared variable/function used : %s\n", variable); exit (1);
// }

#endif