// #ifndef symtab
// #define symtab

#include "symtab.h"

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

// ----------------------------------------------------- Parameter List from Tree Creation ----------------------------------------------------

parameterList* createListNode (int type, char* name) {
    parameterList* lst = (parameterList*) malloc (sizeof (parameterList));
    
    lst->name = (char*) malloc (sizeof(char) * strlen(name));
    strcpy (lst->name, name);
    lst->type = type, lst->next = NULL;

    return lst;
}

parameterList* makeParamList (treenode* root) {
    treenode* current1 = NULL;
    parameterList *param = NULL, *current2 = NULL;

    param = createListNode (root->vartype, root->varname);
    current2 = param;
    current1 = root->left;

    while (current1 != NULL) {
        current2->next = createListNode (current1->vartype, current1->varname);
        current1 = current1->left;
        current2 = current2->next;
    }

    return param;
}

// ----------------------------------------------------- Global Symbol Table Creation ----------------------------------------------------

GSymtableNode* createGTableNode (char* name, int type, int location, int size, parameterList* param, int flable) {
    GSymtableNode* temp = (GSymtableNode*) malloc (sizeof (GSymtableNode));

    temp->name = (char*) malloc (strlen (name) * sizeof (char));
    strcpy (temp->name, name );

    temp->type = type, temp->location = location, temp->size = size;
    temp->flable = flable , temp->param = param, temp->next = NULL ;

    return temp;
}

void addGVariable (char* name , int type, int size) {
    GSymtableNode* current = T.head;

    if (current == NULL) {
        T.head = createGTableNode (name, type, getNewLocation (size), size, NULL, -1);
        return ;
    }

    while (current->next) {
        if (strcmp (current->name, name ) == 0) {
            printf ("Error: variable declared more than once\n");
            exit (0);
        } current = current->next;
    }

    if (strcmp (current->name, name ) == 0) {
        printf ("Error: variable declared more than once\n");
        exit (0);
    }

    current->next = createGTableNode (name, type, getNewLocation (size), size, NULL, -1);
}

void addGFunction (char* name , int type, treenode* param) {
    GSymtableNode* current = T.head;

    if (current == NULL) {
        T.head = createGTableNode (name, type, -1, -1, makeParamList (param), getNewFunction ());
        return ;
    }

    while (current->next) {
        if (strcmp (current->name, name ) == 0) {
            printf ("Error: function declared more than once : %s\n", name);
            exit (0);
            // return;
        } current = current->next;
    }

    if (strcmp (current->name, name ) == 0) {
        printf ("Error: function declared more than once : %s\n", name);
        exit (0);
        // return;
    }

    current->next = createGTableNode (name, type, -1, -1, makeParamList (param), getNewFunction ());
}

void makeGSymbolTableEntry (treenode* node, int type) {
    if (node == NULL) return;

    if (node->nodetype == IDENTIFIER_NODE) {
        addGVariable (node->varname , type, 1);
        return;
    }

    if (node->nodetype == ARRAY_NODE) {
        addGVariable (node->varname, type, node->varvalue);
        return;
    }

    if (node->nodetype == FUNCTION_NODE && node->varvalue == FUNC_DECL) {
        addGFunction (node->varname, type, node->left);
        return;
    }

    makeGSymbolTableEntry (node->left, type);
    makeGSymbolTableEntry (node->right, type);
}

int declareGVariables (treenode* node) {
    if (node == NULL) return 0;

    if (node->nodetype == CONNECTOR) {
        declareGVariables (node->left);
        declareGVariables (node->right);
        return 0;
    }
    
    makeGSymbolTableEntry (node->right, node->left->vartype);
}

// -------------------------------------------------------- Local Symbol Table Creation -------------------------------------------------------

LSymtableNode* createLTableNode (char* name, int type, int location) {
    LSymtableNode* temp = (LSymtableNode*) malloc (sizeof (LSymtableNode));

    temp->name = (char*) malloc (strlen (name) * sizeof (char));
    strcpy (temp->name, name );

    temp->type = type, temp->location = location, temp->next = NULL ;

    return temp;
}

void addLVariable (char* name , int type) {
    LSymtableNode* current = t.head;

    if (current == NULL) {
        t.head = createLTableNode (name, type, 0);
        return ;
    }

    int binding = 1;
    while (current->next) {
        if (strcmp (current->name, name ) == 0) {
            printf ("Error: variable declared more than once\n");
            exit (0);
        } 
        binding++;
        current = current->next;
    }

    if (strcmp (current->name, name ) == 0) {
        printf ("Error: variable declared more than once\n");
        exit (0);
    }

    current->next = createLTableNode (name, type, binding);
}

void makeLSymbolTableEntry (treenode* node, int type) {
    if (node == NULL) return;

    if (node->nodetype == IDENTIFIER_NODE) {
        addLVariable (node->varname , type);
        return;
    }

    if (node->nodetype == PARAMETER_NODE) {
        addLVariable (node->varname, type);
        makeLSymbolTableEntry (node->left, node->left == NULL ? -1 : node->left->vartype);
        return;
    }

    // if (node->nodetype == CONNECTOR)
    makeLSymbolTableEntry (node->left, type);
    makeLSymbolTableEntry (node->right, type);
}

void declareLVariables (treenode* node) {
    if (node == NULL) return;

    if (node->nodetype == CONNECTOR) {
        declareLVariables (node->left);
        declareLVariables (node->right);
        return;
    }

    if (node->nodetype == PARAMETER_NODE) {
        makeLSymbolTableEntry (node, node->vartype);
        return;
    }
    
    // if (node->nodetype == DECLARATOR)
    makeLSymbolTableEntry (node->right, node->left->vartype);
}

// #endif