#include "symtab.h"

// ----------------------------------------------------- Global Symbol Table Creation ----------------------------------------------------

GSymtableNode* createGTableNode (char* name, TypeTable *type, ClassTable *classtype, int location, int size, ParameterList* param, int funcLabel) {
    GSymtableNode* temp = (GSymtableNode*) malloc (sizeof (GSymtableNode));

    temp->name = (char*) malloc (strlen (name) * sizeof (char));
    strcpy (temp->name, name );

    temp->type = type, temp->classtype = classtype, temp->location = location, temp->size = size;
    temp->funcLabel = funcLabel , temp->param = param, temp->next = NULL ;

    return temp;
}

void addGVariable (char* name, TypeTable *type, ClassTable *classtype, int size) {
    GSymtableNode* current = T.head;

    if (current == NULL) {
        T.head = createGTableNode (name, type, classtype, getNewLocation (size), size, NULL, -1);
        return ;
    }

    while (current->next) {
        if (strcmp (current->name, name ) == 0) {
            printf ("ERROR: variable '%s' declared more than once\n", name);
            exit (0);
        } current = current->next;
    }

    if (strcmp (current->name, name ) == 0) {
        printf ("ERROR: variable '%s' declared more than once\n", name);
        exit (0);
    }

    current->next = createGTableNode (name, type, classtype, getNewLocation (size), size, NULL, -1);
}

void addGFunction (char *name, TypeTable *type, TreeNode* param) {
    GSymtableNode* current = T.head;

    if (current == NULL) {
        T.head = createGTableNode (name, type, NULL, -1, -1, makeParamList (param), getNewFunction ());
        return ;
    }

    while (current->next) {
        if (strcmp (current->name, name ) == 0) {
            printf ("ERROR: function '%s' declared more than once\n", name);
            exit (1);
        } current = current->next;
    }

    if (strcmp (current->name, name ) == 0) {
        printf ("ERROR: function '%s' declared more than once\n", name);
        exit (1);
    }

    current->next = createGTableNode (name, type, NULL, -1, -1, makeParamList (param), getNewFunction ());
}

void makeGSymbolTableEntry (TreeNode* node, TypeTable *type, ClassTable *classtype) {
    if (node == NULL) return;

    if (node->nodetype == IDENTIFIER_NODE) {
        addGVariable (node->varname , type, classtype, (classtype ? 2 : 1));
    }
    else if (node->nodetype == ARRAY_NODE) {
        addGVariable (node->varname, type, classtype, node->varvalue);
    }
    else if (node->nodetype == FUNCTION_NODE && node->varvalue == FUNC_DECL) {
        addGFunction (node->varname, type, node->right);
    }
}

void declareGVariables (TreeNode* node) {
    TreeNode *current = node;
    while (current) {
        TreeNode* current2 = current->right;
        while (current2) {
            makeGSymbolTableEntry (current2, current->datatype, current->classtype);
            current2 = current2->left;
        }
        current = current->left;
    }
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
            printf ("ERROR: variable '%s' declared more than once\n", name);
            exit (0);
        } 
        binding++;
        current = current->next;
    }

    if (strcmp (current->name, name ) == 0) {
        printf ("ERROR: variable '%s' declared more than once\n", name);
        exit (0);
    }

    current->next = createLTableNode (name, type, binding);
}

void declareLVariables (TreeNode* node) {
    TreeNode *current = node;
    while (current) {
        TreeNode *current2 = current->right;
        while (current2) {
            // makeLSymbolTableEntry (current2, current->datatype);
            addLVariable (current2->varname, current->datatype);
            current2 = current2->left;
        }
        current = current->left;
    }
}

void declareLParameters (TreeNode *node) {
    TreeNode *current = node;
    while (current) {
        // makeLSymbolTableEntry (current, current->datatype);
        addLVariable (current->varname, current->datatype);
        current = current->left;
    }
}