#include "symtab.h"

// ----------------------------------------------------- Parameter List from Tree Creation ----------------------------------------------------

ParameterList* createListNode (TypeTable *type, char* name) {
    ParameterList* lst = (ParameterList*) malloc (sizeof (ParameterList));
    
    lst->name = (char*) malloc (sizeof(char) * strlen(name));
    strcpy (lst->name, name);
    lst->type = type, lst->next = NULL;

    return lst;
}

ParameterList* makeParamList (TreeNode* root) {
    TreeNode* current1 = NULL;
    ParameterList *param = NULL, *current2 = NULL;

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

GSymtableNode* createGTableNode (char* name, TypeTable *type, int location, int size, ParameterList* param, int flable) {
    GSymtableNode* temp = (GSymtableNode*) malloc (sizeof (GSymtableNode));

    temp->name = (char*) malloc (strlen (name) * sizeof (char));
    strcpy (temp->name, name );

    temp->type = type, temp->location = location, temp->size = size;
    temp->flable = flable , temp->param = param, temp->next = NULL ;

    return temp;
}

void addGVariable (char* name, TypeTable *type, int size) {
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

void addGFunction (char* name, TypeTable *type, TreeNode* param) {
    GSymtableNode* current = T.head;

    if (current == NULL) {
        T.head = createGTableNode (name, type, -1, -1, makeParamList (param), getNewFunction ());
        return ;
    }

    while (current->next) {
        if (strcmp (current->name, name ) == 0) {
            printf ("Error: function declared more than once : %s\n", name);
            exit (1);
        } current = current->next;
    }

    if (strcmp (current->name, name ) == 0) {
        printf ("Error: function declared more than once : %s\n", name);
        exit (1);
    }

    current->next = createGTableNode (name, type, -1, -1, makeParamList (param), getNewFunction ());
}

void makeGSymbolTableEntry (TreeNode* node, TypeTable *type) {
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

int declareGVariables (TreeNode* node) {
    if (node == NULL) return 0;

    if (node->nodetype == CONNECTOR) {
        declareGVariables (node->left);
        declareGVariables (node->right);
        return 0;
    }
    
    makeGSymbolTableEntry (node->right, node->left->vartype);
}

// -------------------------------------------------------- Local Symbol Table Creation -------------------------------------------------------

LSymtableNode* createLTableNode (char* name, TypeTable *type, int location) {
    LSymtableNode* temp = (LSymtableNode*) malloc (sizeof (LSymtableNode));

    temp->name = (char*) malloc (strlen (name) * sizeof (char));
    strcpy (temp->name, name );

    temp->type = type, temp->location = location, temp->next = NULL ;

    return temp;
}

void addLVariable (char* name, TypeTable *type) {
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

void makeLSymbolTableEntry (TreeNode* node, TypeTable *type) {
    if (node == NULL) return;

    if (node->nodetype == IDENTIFIER_NODE) {
        addLVariable (node->varname , type);
        return;
    }

    if (node->nodetype == PARAMETER_NODE) {
        addLVariable (node->varname, type);
        makeLSymbolTableEntry (node->left, node->left == NULL ? NULL : node->left->vartype);
        return;
    }

    // if (node->nodetype == CONNECTOR)
    makeLSymbolTableEntry (node->left, type);
    makeLSymbolTableEntry (node->right, type);
}

void declareLVariables (TreeNode* node) {
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