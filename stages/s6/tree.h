#include "headers.h"
// #include "symtab.h"

TreeNode* makeNumberNode (int value) {
    TreeNode* node = (TreeNode*) malloc (sizeof (TreeNode));
    node->nodetype = VALUE_NODE, node->vartype = NULL, node->varvalue = value;
    node->varname = NULL, node->left = node->right = NULL;
    return node;
}

TreeNode* makeVariableNode (char* name) {
    TreeNode* node = (TreeNode*) malloc (sizeof (TreeNode));
    node->nodetype = IDENTIFIER_NODE, node->vartype = NULL, node->varvalue = -1;
    
    node->varname = (char*) malloc (sizeof(char) * strlen (name));
    strcpy (node->varname, name);
    
    node->left = node->right = NULL;
    return node;
}