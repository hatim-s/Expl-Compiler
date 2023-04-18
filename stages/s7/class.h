#ifndef class_header
#define class_header

#include "symtab.h"

ClassTable *CT, *currentClass;

FieldList* createMemberNode (char* name, int index, TypeTable* type, ClassTable *classType) {
    FieldList* temp = (FieldList*) malloc (sizeof (FieldList));
    
    temp->name = (char*) malloc (sizeof (char) * strlen (name));
    strcpy (temp->name, name);

    temp->fieldIndex = index, temp->type = type, temp->classtype = classType, temp->next = NULL;
    return temp;
}

MethodList* createMethodNode (char* name, int index, TypeTable *type, ParameterList *paramlst) {
    MethodList* temp = (MethodList*) malloc (sizeof (MethodList));
    
    temp->name = (char*) malloc (sizeof (char) * strlen (name));
    strcpy (temp->name, name);

    temp->methodIndex = index, temp->type = type, temp->funcLabel = getNewFunction ();
    temp->param = paramlst, temp->next = NULL;
    return temp;
}

ClassTable* createClassTableNode (char *name) {
    ClassTable *temp = (ClassTable*) malloc (sizeof (ClassTable));
    
    temp->name = (char*) malloc (sizeof(char) * strlen(name)); strcpy (temp->name, name);

    temp->classIndex = getNewLocation (8), temp->memberCount = temp->methodCount = 0;
    temp->member = NULL, temp->methods = NULL, temp->parent = NULL, temp->next = NULL;

    return temp;
}

/* -------------------------------------------------------------- Class Table Queries -------------------------------------------------------------- */

ClassTable* getClassNode (char *name) {
    ClassTable *current = CT;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }

    return NULL;

    // printf ("ERROR : undeclared class used : %s\n", name);
    // exit (1);
}

MethodList* getMethod (char *name) {
    MethodList *current = currentClass->methods;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared method used : %s\n", name);
    exit (1);
}

MethodList* getMethodFromClass (char *name, ClassTable *class) {
    MethodList *current = class->methods;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared method used : %s\n", name);
    exit (1);
}

FieldList* getMember (char *name) {
    FieldList *current = currentClass->member;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared member used : %s\n", name);
    exit (1);
}

/* -------------------------------------------------------------- Class Table Construction -------------------------------------------------------------- */

void addMember (TreeNode* member) {
    FieldList *current = currentClass->member;

    if (current == NULL) {
        currentClass->member = createMemberNode (member->varname, 1, member->datatype, member->classtype);
        return;
    }

    while (current->next) {
        if (strcmp (member->varname, current->name) == 0) {
            printf ("ERROR: multiple declarations of member %s\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, member->varname) == 0) {
        printf ("ERROR: multiple declarations of member %s\n", current->name);
        exit (1);
    }

    current->next = createMemberNode (member->varname, current->fieldIndex + 1, member->datatype, member->classtype);
    (currentClass->memberCount)++;
}

void addMethod (TreeNode* method) {
    MethodList *current = currentClass->methods;

    if (current == NULL) {
        currentClass->methods = createMethodNode (method->varname, 1, method->datatype, makeParamList (method->right));
        return;
    }

    while (current->next) {
        if (strcmp (method->varname, current->name) == 0) {
            printf ("ERROR: multiple declarations of method %s\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, method->varname) == 0) {
        printf ("ERROR: multiple declarations of method %s\n", current->name);
        exit (1);
    }

    current->next = createMethodNode (method->varname, current->methodIndex + 1, method->datatype, makeParamList (method->right));
    (currentClass->methodCount)++;
}

void addClassEntry (char *classname, char *parentname) {
    ClassTable *current = CT;
    if (current == NULL) {
        CT = createClassTableNode (classname);
        if (parentname) CT->parent = getClassNode (parentname);

        currentClass = CT;
        return;
    }

    while (current->next) {
        if (strcmp (classname, current->name) == 0) {
            printf ("ERROR: multiple declarations of class %s\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, classname) == 0) {
        printf ("ERROR: multiple declarations of class %s\n", current->name);
        exit (1);
    }

    current->next = createClassTableNode (classname);
    if (parentname) current->next->parent = getClassNode (parentname);

    currentClass = current->next;
}

#endif