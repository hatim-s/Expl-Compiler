#ifndef class_header
#define class_header

#include "symtab.h"
// #include "class_func.h"

ParameterList* copyParameterNode (ParameterList *node) {
    if (!node) return NULL;

    ParameterList *new = malloc (sizeof (ParameterList));
    new->name = (char*) malloc (sizeof(char) * strlen(node->name)); strcpy(new->name, node->name);
    new->type = node->type;
    return new;
}

ParameterList* copyParameterList (ParameterList *original) {
    ParameterList *new = copyParameterNode (original);
    ParameterList *current = new;
    while (original) {
        original = original->next;
        current->next = copyParameterNode (original);
        current = current->next;
    }

    return new;
}

FieldList* copyFieldNode (FieldList *node) {
    if (!node) return NULL;

    FieldList *new = malloc (sizeof (FieldList));
    new->name = (char*) malloc (sizeof(char) * strlen(node->name)); strcpy(new->name, node->name);
    new->fieldIndex = node->fieldIndex;
    new->type = node->type;
    new->classtype = node->classtype;
    return new;
}

MethodList* copyMethodNode (MethodList *node) {
    if (!node) return NULL;

    MethodList *new = malloc (sizeof (MethodList));
    new->name = (char*) malloc (sizeof(char) * strlen(node->name)); strcpy(new->name, node->name);
    new->methodIndex = node->methodIndex;
    new->funcLabel = node->funcLabel;
    new->declStatus = REDEFINED;
    new->param = copyParameterList (node->param);
    new->type = node->type;
    return new;
}

FieldList* copyFieldList (FieldList *original) {
    FieldList *new = copyFieldNode (original);
    FieldList *current = new;
    while (original) {
        original = original->next;
        current->next = copyFieldNode (original);
        current = current->next;
    }

    return new;
}

MethodList* copyMethodList (MethodList* original) {
    MethodList *new = copyMethodNode (original);
    MethodList *current = new;
    while (original) {
        original = original->next;
        current->next = copyMethodNode (original);
        current = current->next;
    }

    return new;
}

/* -------------------------------------------------------------- Class Table Auxillary Functions -------------------------------------------------------------- */

bool extendedClass = false;
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

    temp->methodIndex = index, temp->type = type, temp->funcLabel = getNewFunction (), temp->declStatus = UNDEFINED;
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

    printf ("ERROR : undeclared method used : '%s'\n", name);
    exit (1);
}

MethodList* getMethodFromClass (char *name, ClassTable *class) {
    MethodList *current = class->methods;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared method used : '%s'\n", name);
    exit (1);
}

FieldList* getMember (char *name) {
    FieldList *current = currentClass->member;
    while (current) {
        if (strcmp (current->name, name) == 0) return current;
        current = current->next;
    }

    printf ("ERROR : undeclared member used : '%s'\n", name);
    exit (1);
}

/* -------------------------------------------------------------- Class Table Construction -------------------------------------------------------------- */

void addMember (TreeNode* member) {
    if (currentClass->memberCount == 7) {
        printf ("Error : more than 7 members declared in class '%s'\n", currentClass->name);
        exit (1);
    }

    FieldList *current = currentClass->member;

    if (current == NULL) {
        currentClass->member = createMemberNode (member->varname, 1, member->datatype, member->classtype);
        return;
    }

    while (current->next) {
        if (strcmp (member->varname, current->name) == 0) {
            printf ("ERROR: multiple declarations of member '%s'\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, member->varname) == 0) {
        printf ("ERROR: multiple declarations of member '%s'\n", current->name);
        exit (1);
    }

    current->next = createMemberNode (member->varname, current->fieldIndex + 1, member->datatype, member->classtype);
    (currentClass->memberCount)++;
}

void addMethod (TreeNode* method) {
    if (currentClass->methodCount == 8) {
        printf ("Error : more than 8 methods declared in class '%s'\n", currentClass->name);
        exit (1);
    }

    MethodList *current = currentClass->methods;

    if (current == NULL) {
        currentClass->methods = createMethodNode (method->varname, 0, method->datatype, makeParamList (method->right));
        return;
    }

    while (current->next) {
        if (strcmp (method->varname, current->name) == 0) {
            if (!extendedClass){
                printf ("ERROR: multiple declarations of method '%s'\n", current->name);
                exit (1);
            }

            if (!matchParameters (current->param, method->right)) {
                printf ("Error : function '%s' signatures do not match.\nPreviously defined here : '%s'\n", method->varname, current->name);
                exit (1);
            }

            current->funcLabel = getNewFunction ();
            return;

        }
        current = current->next;
    }

    if (strcmp (current->name, method->varname) == 0) {
        if (!extendedClass) {
            printf ("ERROR: multiple declarations of method '%s'\n", current->name);
            exit (1);
        }

        if (!matchParameters (current->param, method->right)) {
            printf ("Error : function '%s' signatures do not match.\nPreviously defined here : '%s'\n", method->varname, current->name);
            exit (1);
        }

        current->funcLabel = getNewFunction ();
        return;
    }

    current->next = createMethodNode (method->varname, current->methodIndex + 1, method->datatype, makeParamList (method->right));
    (currentClass->methodCount)++;
}

void addClassEntry (char *classname, char *parentname) {
    ClassTable *current = CT;
    if (current == NULL) {
        CT = createClassTableNode (classname);

        currentClass = CT;
        return;
    }

    while (current->next) {
        if (strcmp (classname, current->name) == 0) {
            printf ("ERROR: multiple declarations of class '%s'\n", current->name);
            exit (1);
        }
        current = current->next;
    }

    if (strcmp (current->name, classname) == 0) {
        printf ("ERROR: multiple declarations of class '%s'\n", current->name);
        exit (1);
    }

    current->next = createClassTableNode (classname);
    current = current->next;

    if (parentname) {
        ClassTable *parent = getClassNode (parentname);
        current->parent = parent;
        current->memberCount = parent->memberCount;
        current->methodCount = parent->methodCount;
        current->member = copyFieldList (parent->member);
        current->methods = copyMethodList (parent->methods);
    }

    currentClass = current;
}

#endif