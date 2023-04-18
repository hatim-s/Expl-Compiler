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

// #define TYPE_INT 101
// #define TYPE_STR 102
// #define TYPE_BOOL 103

#define FUNC_CALL 101
#define FUNC_DECL 102
#define FUNC_DEF 103

#define INIT_NODE 201
#define ALLOC_NODE 202
#define FREE_NODE 203

/* --------------------------------------------------------------- Structure Definitions ---------------------------------------------------------------*/

typedef 
    struct TreeNode {
        int nodetype, varvalue;
        char* varname;
        struct TypeTable *vartype;
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
        int size, location, flable;
        struct TypeTable *type;
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
        struct FieldList* next;
    }
FieldList;

#endif