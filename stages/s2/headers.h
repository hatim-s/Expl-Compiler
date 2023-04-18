#ifndef headers
#define headers

#include <stdio.h>
#include <stdlib.h>

#define CONNECTOR 0
#define IDENTIFIER_NODE 1
#define OPERATOR_NODE 2
#define VALUE_NODE 3
#define READ_NODE 4
#define WRITE_NODE 5

#define TYPE_INT 0
#define TYPE_FLOAT 1
#define TYPE_CHAR 2
#define TYPE_DOUBLE 3
#define TYPE_LONG 4
#define TYPE_LLONG 5

typedef struct treenode {
    int nodetype;                   // type of node : ID, OP, STMT etc
    int vartype;                    // type the variable declaration : int, float, double etc 
    int varvalue;                   // value of number for nodetype = NUM
    char* varname;                  // name of variable, value of operator etc
    struct treenode *left,*right;   // left and right branches
} treenode;

#endif