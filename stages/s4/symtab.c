#include "symtab.h"

void initializeTable () {
    T.head = NULL;
}

int getNewLocation (int size) {
    static int loc = 4096;
    int temp = loc;
    loc += size;
    return temp;
}

void addVariable (char* variable, int type, int size) {
    symtableNode* current = T.head;

    if (current == NULL) {
        symtableNode* temp = (symtableNode*) malloc (sizeof (symtableNode));
        temp->var = (char*) malloc (strlen (variable) * sizeof (char));
        strcpy (temp->var, variable);

        temp->type = type;
        temp->location = getNewLocation (size);
        temp->size = size;
        temp->next = NULL;

        T.head = temp;
        return ;
    }

    while (current->next) {
        if (strcmp (current->var, variable) == 0) {
            printf ("Error: variable declared more than once\n");
            exit (0);
        }
        current = current->next;
    }

    if (strcmp (current->var, variable) == 0) {
        printf ("Error: variable declared more than once\n");
        exit (0);
    }

    symtableNode* temp = (symtableNode*) malloc (sizeof (symtableNode));
    temp->var = variable; temp->location = getNewLocation (size); temp->size = size;
    temp->type = type; temp->next = NULL;

    current->next = temp;
}

int getVariableLocation (char* variable) {
    symtableNode* current = T.head;
    while (current) {
        if (strcmp (current->var, variable) == 0) return current->location;
        current = current->next;
    }

    printf ("Error: undeclared variable used\n");
    exit (0);
}

int getVariableType (char* variable) {
    symtableNode* current = T.head;
    while (current) {
        if (strcmp (current->var, variable) == 0) 
            return current->type;
        current = current->next;
    }

    printf ("Error: undeclared variable used\n");
    exit (0);
}

int getVariableSize (char* variable) {
    symtableNode* current = T.head;
    while (current) {
        if (strcmp (current->var, variable) == 0) 
            return current->size;
        current = current->next;
    }

    printf ("Error: undeclared variable used\n");
    exit (0);
}