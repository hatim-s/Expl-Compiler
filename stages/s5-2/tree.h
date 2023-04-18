#include "headers.h"

treenode* makeNumberNode (int value) {
    treenode* node = (treenode*) malloc (sizeof (treenode));
    node->nodetype = VALUE_NODE, node->vartype = TYPE_INT, node->varvalue = value;
    node->varname = NULL, node->left = node->right = NULL;
    return node;
}

treenode* makeVariableNode (char* name) {
    treenode* node = (treenode*) malloc (sizeof (treenode));
    node->nodetype = IDENTIFIER_NODE, node->vartype = -1, node->varvalue = -1;
    
    node->varname = (char*) malloc (sizeof(char) * strlen (name));
    strcpy (node->varname, name);
    
    node->left = node->right = NULL;
    return node;
}