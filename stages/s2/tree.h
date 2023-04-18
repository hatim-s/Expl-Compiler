#include "headers.h"

/*Tree Generation Happens Here*/
treenode* makeOperatorNode(char* c,treenode *l,treenode *r);
treenode* makeConnectorNode (treenode* l, treenode* r);

treenode* makeReadNode (treenode* l);
treenode* makeWriteNode (treenode* l);

treenode* makeNumberNode (int varval);
treenode* makeVariableNode (char* c);

int evaluate (treenode *t);