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

#define TYPE_INT 101
#define TYPE_STR 102
#define TYPE_BOOL 103

#define FUNC_CALL 201
#define FUNC_DECL 202
#define FUNC_DEF 203

/* --------------------------------------------------------------- Structure Definitions ---------------------------------------------------------------*/

typedef 
    struct treenode {
        int nodetype;
        int vartype; 
        int varvalue;
        char* varname;
        struct treenode *left,*right;
    } 
treenode;

typedef
    struct arguementList {
        treenode *node;
        struct arguementList *next;
    }
arguementList;

typedef 
    struct parameterList {
        int type;
        char* name;
        struct parameterList *next;
    } 
parameterList;

typedef 
    struct GSymtableNode {
        char* name;
        int type, size, location, flable;
        parameterList *param;
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
        char* name;
        int location, type;
        struct LSymtableNode *next; 
    } 
LSymtableNode;

typedef 
    struct LSymTable {
        struct LSymtableNode *head;
    } 
LSymTable;

#endif