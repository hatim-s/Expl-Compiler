#include "headers.h"

/*Tree Generation Happens Here*/
treenode* makeTypeNode ();
treenode* makeDeclarationNode (treenode* type, treenode* varlist);

treenode* makeOperatorNode(char* c,treenode *l,treenode *r);
treenode* makeConnectorNode (treenode* l, treenode* r);

treenode* makeReadNode (treenode* l);
treenode* makeWriteNode (treenode* l);

treenode* makeBreakNode ();
treenode* makeContinueNode ();

treenode* makeIfElseNode (treenode* cond, treenode* ifstmt, treenode* elsestmt);
treenode* makeIfNode (treenode* cond, treenode* ifstmt);
treenode* makeWhileNode (treenode* cond, treenode* whilestmt);

treenode* makeNumberNode (int varval);
treenode* makeVariableNode (char* c);

int evaluate (treenode *t);