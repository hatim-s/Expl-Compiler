#include "headers.h"
// #include "symtab.h"

TreeNode* makeNumberNode (int value) {
    TreeNode* node = (TreeNode*) malloc (sizeof (TreeNode));
    node->nodetype = VALUE_NODE, node->datatype = NULL, node->classtype = NULL;
    node->varvalue = value, node->varname = NULL, node->left = node->right = NULL;
    return node;
}

TreeNode* makeVariableNode (char* name) {
    TreeNode* node = (TreeNode*) malloc (sizeof (TreeNode));
    node->nodetype = IDENTIFIER_NODE, node->datatype = NULL, node->classtype = NULL; 
    node->varname = (char*) malloc (sizeof(char) * strlen (name)); strcpy (node->varname, name);
    node->varvalue = -1, node->left = node->right = NULL;
    return node;
}

TreeNode* makeSelfNode () {
    TreeNode* node = (TreeNode*) malloc (sizeof (TreeNode));
    node->nodetype = SELF_NODE, node->datatype = NULL, node->classtype = NULL; 
    node->varvalue = -1, node->varname = "SELF", node->left = node->right = NULL;
    return node;
}

TreeNode* makeStringNode (char *string) {
    TreeNode* node = (TreeNode*) malloc (sizeof (TreeNode));
    node->varname = (char*) malloc (sizeof (char) * strlen (string));
    strcpy (node->varname, string);

    node->nodetype = STRING_NODE, node->datatype = NULL, node->classtype = NULL; 
    node->varvalue = -1, node->left = node->right = NULL;
    return node;
}