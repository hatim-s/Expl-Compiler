#ifndef type_header
#define type_header

#include "headers.h"

TypeTable* Table;

TypeTable* createTypeNode (char* name, int size, struct FieldList* fields) {
    TypeTable* temp = (TypeTable*) malloc (sizeof (TypeTable));
    
    temp->name = (char*) malloc (sizeof (char) * strlen (name));
    strcpy (temp->name, name);

    temp->size = size, temp->fields = fields, temp->next = NULL;
    return temp;
}

FieldList* createFieldNode (char* name, int index, TypeTable* type) {
    FieldList* temp = (FieldList*) malloc (sizeof (FieldList));
    
    temp->name = (char*) malloc (sizeof (char) * strlen (name));
    strcpy (temp->name, name);

    temp->fieldIndex = index, temp->type = type, temp->next = NULL;
    return temp;
}

void initializeTypeTable () {
    TypeTable* current = NULL;

    current = createTypeNode ("NULL", 0, NULL);
    current->next = createTypeNode ("INT", 1, NULL);
    current->next->next = createTypeNode ("STR", 1, NULL);
    current->next->next->next = createTypeNode ("BOOL", 1, NULL);
    current->next->next->next->next = Table;

    Table = current;
}

TypeTable* getTypeNode (char *name) {
    TypeTable *current = Table;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }
    return NULL;
}

TypeTable* getFieldType (char* fieldname, TypeTable *type) {
    FieldList* current = type->fields;
    while (current) {
        if (strcmp (current->name, fieldname) == 0) return current->type;
        current = current->next;
    }
    printf ("error: undeclared field used : %s\n", fieldname);
    exit (1);
}

int getFieldIndex (char *fieldName, TypeTable* type) {
    FieldList* current = type->fields;
    while (current) {
        if (strcmp (current->name, fieldName) == 0) return current->fieldIndex;
        current = current->next;
    }

    printf ("error: undeclared field used : %s\n", fieldName);
    exit (1);
}

TypeTable* addTypeEntry (char *name) {
    TypeTable *current = Table;

    if (current == NULL) {
        Table = createTypeNode (name, 1, NULL);
        return Table;
    }

    while (current->next) {
        if (strcmp (name, current->name) == 0) {
            printf ("error: multiple declarations of type %s\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, name) == 0) {
        printf ("error: multiple declarations of type %s\n", current->name);
        exit (1);
    }

    current->next = createTypeNode (name, 0, NULL);
    return current->next;
}

void addFields (TreeNode* field, TypeTable* type) {
    FieldList *current = type->fields;

    if (current == NULL) {
        type->fields = createFieldNode (field->varname, 1, field->vartype);
        return;
    }

    while (current->next) {
        if (strcmp (field->varname, current->name) == 0) {
            printf ("error: multiple declarations of field %s\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, field->varname) == 0) {
        printf ("error: multiple declarations of field %s\n", current->name);
        exit (1);
    }

    current->next = createFieldNode (field->varname, current->fieldIndex + 1, field->vartype);
    (type->size)++;
}

void declareType (TreeNode* node, char* typename) {
    TreeNode* current = node;
    while (current) {
        addFields (current, getTypeNode (typename));
        current = current->left;
    }
}

#endif