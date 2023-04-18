#ifndef headers
#define headers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "switchs.h"

/* --------------------------------------------------------------- Macro Definitions --------------------------------------------------------------- */

#define CONNECTOR 0
#define IDENTIFIER_NODE 1
#define ARRAY_NODE 2
#define VALUE_NODE 3
#define OPERATOR_NODE 4
#define READ_NODE 5
#define WRITE_NODE 6
#define CONDITIONAL_NODE 7
#define LOOP_NODE 8

#define IF_NODE 9
#define THEN_NODE 10
#define ELSE_NODE 11
#define WHILE_NODE 12
#define DO_NODE 13
#define BREAK_NODE 14
#define CONTINUE_NODE 15

#define TYPE_NODE 16
#define DECLARATOR 17

#define FUNCTION_NODE 18
#define PARAMETER_NODE 19
#define RETURN_NODE 20

#define TYPE_DECL 21
#define FIELD_NODE 22
#define HEAP_NODE 23
#define NULL_NODE 24

#define STRING_NODE 25

#define CLASSTYPE_NODE 26
#define SELF_NODE 27
#define METHOD_NODE 28
#define CLASS_NODE 29

#define FUNC_CALL 101
#define FUNC_DECL 102
#define FUNC_DEF 103
#define METHOD_CALL 104
#define METHOD_DECL 105
#define METHOD_DEF 106

#define INIT_NODE 201
#define ALLOC_NODE 202
#define FREE_NODE 203
#define NEW_NODE 204
#define DELETE_NODE 205

/* --------------------------------------------------------------- Structure Definitions ---------------------------------------------------------------*/

typedef 
    struct TreeNode {
        int nodetype, varvalue;
        char* varname;
        struct TypeTable *datatype;
        struct ClassTable *classtype;
        struct TreeNode *left,*right;
    } 
TreeNode;

typedef 
    struct ParameterList {
        struct TypeTable *type;
        char* name;
        struct ParameterList *next;
    } 
ParameterList;

typedef 
    struct GSymtableNode {
        char *name;
        int size, location, funcLabel;
        struct TypeTable *type;
        struct ClassTable *classtype;
        ParameterList *param;
        struct GSymtableNode *next;
    } 
GSymtableNode;

typedef 
    struct GSymtable {
        struct GSymtableNode *head;
    } 
GSymtable ;

typedef 
    struct LSymtableNode {
        char *name;
        int location;
        struct TypeTable *type;
        struct LSymtableNode *next; 
    } 
LSymtableNode;

typedef 
    struct LSymTable {
        struct LSymtableNode *head;
    } 
LSymTable;

typedef
    struct TypeTable {
        char* name;
        int size;
        struct FieldList* fields;
        struct TypeTable* next;
    }
TypeTable;

typedef 
    struct FieldList {
        char* name;
        int fieldIndex;
        struct TypeTable* type;
        struct ClassTable* classtype;
        struct FieldList* next;
    }
FieldList;

typedef
    struct MethodList {
        char* name;
        int methodIndex, funcLabel;
        TypeTable *type;
        ParameterList *param;
        struct MethodList *next;
    }
MethodList ;

typedef
    struct ClassTable {
        char *name;
        int classIndex, memberCount, methodCount;
        FieldList* member;
        MethodList *methods;
        struct ClassTable *parent, *next;
    }
ClassTable; 

/* --------------------------------------------------------------- Auxillary Function Definitions -----------------------------------------------------------*/

#endif