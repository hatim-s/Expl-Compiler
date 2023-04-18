#ifndef headers
#define headers

#include <stdio.h>
#include <stdlib.h>

#define REG_COUNT 20
#define REG_FREE 1
#define REG_BUSY 0

int registers [REG_COUNT];

typedef struct treenode {
    int value; //value of the expression tree
    char *oprtr; //indicates the operator
    struct treenode *left,*right; //left and right branches
} treenode;

/*To generate and evaluate a tree*/
treenode* makeLeafNode(int n);
treenode* makeOperatorNode(char c,treenode *l,treenode *r);
int evaluate(treenode *t);

/*To generate the machine code for the given tree*/
void headerGenerator ();
void printGenerator (int reg);
int registerInit ();
int codeGenerate (struct treenode* node);

#endif