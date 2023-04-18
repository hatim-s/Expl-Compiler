#include "headers.h"
// #include "symtab.h"

// /*Tree Generation Happens Here*/

// // auxillary function to create node
// treenode* createTreeNode (int nodetype, int vartype, int varvalue, char* varname, treenode* l, treenode* r) ;

// // connector nodes
// treenode* makeConnectorNode (treenode* l, treenode* r) ;

// // identifier nodes
// treenode* makeNumberNode (int value);
// treenode* makeVariableNode (char* name);

// treenode* makeArrayDeclNode (char *name, int size);
// treenode* makeArrayNode (char *varname, treenode* index);

// // operator nodes
// treenode* makeOperatorNode (char* c,treenode *l,treenode *r);

// // library calls
// treenode* makeReadNode (treenode* l);
// treenode* makeWriteNode (treenode* l);

// // auxillary loop constructs
// treenode* makeBreakNode ();
// treenode* makeContinueNode ();

// // conditionals and loops
// treenode* makeIfElseNode (treenode* cond, treenode* ifstmt, treenode* elsestmt);
// treenode* makeIfNode (treenode* cond, treenode* ifstmt);
// treenode* makeWhileNode (treenode* cond, treenode* whilestmt);

// // declarations
// treenode* makeDeclarationNode (treenode* type, treenode* varlist);
// treenode* makeTypeNode (int type);

// // functions
// treenode* makeFunctionDeclNode (char* name, treenode* paramList);
// treenode* makeFunctionDefNode (int type, char* name, treenode* paramList, treenode* funcBody);
// treenode* makeFunctionCallNode (char* name, treenode* argList);

// treenode* makeParameterNode (int type, char* name);
// treenode* makeReturnNode (treenode* expr);


// function definitions
treenode* makeNumberNode (int value) {
    treenode* node = (treenode*) malloc (sizeof (treenode));
    node->nodetype = VALUE_NODE, node->vartype = TYPE_INT, node->varvalue = value;
    node->varname = NULL, node->left = node->right = NULL;
    return node;
    // return createTreeNode (VALUE_NODE, TYPE_INT, value, NULL, NULL, NULL);
}

treenode* makeVariableNode (char* name) {
    treenode* node = (treenode*) malloc (sizeof (treenode));
    node->nodetype = IDENTIFIER_NODE, node->vartype = -1, node->varvalue = -1;
    
    node->varname = (char*) malloc (sizeof(char) * strlen (name));
    strcpy (node->varname, name);
    
    node->left = node->right = NULL;
    return node;
    // return createTreeNode (IDENTIFIER_NODE, -1, -1, name, NULL, NULL);
}
