#ifndef headers
#define headers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "switchs.h"

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

#define TYPE_INT 1
#define TYPE_STR 2
#define TYPE_BOOL 3

typedef struct treenode {
    int nodetype;                   // type of node : ID, OP, STMT etc
    int vartype;                    // type the variable declaration : int, float, double etc 
    int varvalue;                   // value of number for nodetype = NUM
    char* varname;                  // name of variable, value of operator etc
    struct treenode *left,*right;   // left and right branches
} treenode;

#endif