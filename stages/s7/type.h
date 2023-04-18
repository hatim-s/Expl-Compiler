#ifndef type_header
#define type_header

#include "symtab.h"

TypeTable *TT, *currentType;

TypeTable* createTypeNode (char* name, int size, struct FieldList* fields) {
    TypeTable* temp = (TypeTable*) malloc (sizeof (TypeTable));
    
    temp->name = (char*) malloc (sizeof (char) * strlen (name));
    strcpy (temp->name, name);

    temp->size = size, temp->fields = fields, temp->next = NULL;
    return temp;
}

void initializeTypeTable () {
    TypeTable* current = NULL;

    current = createTypeNode ("NULL", 0, NULL);
    current->next = createTypeNode ("INT", 1, NULL);
    current->next->next = createTypeNode ("STR", 1, NULL);
    current->next->next->next = createTypeNode ("BOOL", 1, NULL);
    current->next->next->next->next = TT;

    TT = current;
}

/*-------------------------------------------------------------- NodeType Creation --------------------------------------------------------------*/

FieldList* createFieldNode (char* name, int index, TypeTable *type, ClassTable *classType) {
    FieldList* temp = (FieldList*) malloc (sizeof (FieldList));
    
    temp->name = (char*) malloc (sizeof (char) * strlen (name));
    strcpy (temp->name, name);

    temp->fieldIndex = index, temp->type = type, temp->next = NULL;
    return temp;
}

/*-------------------------------------------------------------- TypeTable Queries --------------------------------------------------------------*/

TypeTable* getTypeNode (char *name) {
    TypeTable *current = TT;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }
    return NULL;
}

FieldList* getField (char *fieldName, TypeTable *type) {
    FieldList* current = type->fields;
    while (current) {
        if (strcmp (current->name, fieldName) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared field used : %s\n", fieldName);
}

/*-------------------------------------------------------------- TypeTable Creation --------------------------------------------------------------*/

TypeTable* addTypeEntry (char *name) {
    TypeTable *current = TT;

    if (current == NULL) {
        TT = createTypeNode (name, 1, NULL);
        currentType = TT;
        return TT;
    }

    while (current->next) {
        if (strcmp (name, current->name) == 0) {
            printf ("ERROR: multiple declarations of type %s\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, name) == 0) {
        printf ("ERROR: multiple declarations of type %s\n", current->name);
        exit (1);
    }

    current->next = createTypeNode (name, 0, NULL);
    currentType = current->next;
    return current->next;
}

void addField (TreeNode* field) {
    FieldList *current = currentType->fields;

    if (current == NULL) {
        currentType->fields = createFieldNode (field->varname, 1, field->datatype, NULL);
        return;
    }

    while (current->next) {
        if (strcmp (field->varname, current->name) == 0) {
            printf ("ERROR: multiple declarations of field %s\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, field->varname) == 0) {
        printf ("ERROR: multiple declarations of field %s\n", current->name);
        exit (1);
    }

    current->next = createFieldNode (field->varname, current->fieldIndex + 1, field->datatype, NULL);
    (currentType->size)++;
}

#endif