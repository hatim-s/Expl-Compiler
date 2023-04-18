#include "tree.h"

/*Tree Generation Happens Here*/

treenode* makeOperatorNode(char* c,treenode *l,treenode *r) {
    treenode *temp = (treenode*) malloc (sizeof(treenode));

    temp->nodetype = OPERATOR_NODE;
    temp->vartype = temp->varvalue = -1;
    temp->varname = c;
    temp->left = l, temp->right = r;

    return temp;
}

treenode* makeConnectorNode (treenode* l, treenode* r) {
    treenode *temp = (treenode*) malloc (sizeof(treenode));

    temp->nodetype = CONNECTOR;
    temp->vartype = temp->varvalue = -1;
    temp->varname = NULL;
    temp->left = l, temp->right = r;

    return temp;
}

treenode* makeReadNode (treenode* l) {
    treenode* temp = (treenode*) malloc (sizeof (treenode));

    temp->nodetype = READ_NODE;
    temp->vartype = temp->varvalue = -1;
    temp->varname = NULL;
    temp->left = l, temp->right = NULL;

    return temp;
}

treenode* makeWriteNode (treenode* l) {
    treenode* temp = (treenode*) malloc (sizeof (treenode));

    temp->nodetype = WRITE_NODE;
    temp->vartype = temp->varvalue = -1;
    temp->varname = NULL;
    temp->left = l, temp->right = NULL;

    return temp;
}

treenode* makeNumberNode (int varval){
    treenode *temp = (treenode*) malloc (sizeof (treenode));

    temp->nodetype = VALUE_NODE, temp->varname = NULL;
    temp->vartype = TYPE_INT, temp->varvalue = varval;
    temp->left = NULL, temp->right = NULL;

    return temp;
}

treenode* makeVariableNode (char* c){
    treenode *temp = (treenode*) malloc (sizeof (treenode));

    temp->nodetype = IDENTIFIER_NODE, temp->varname = c;
    temp->vartype = -1, temp->varvalue = -1;
    temp->left = NULL, temp->right = NULL;

    return temp;
}

int evaluate (treenode *t) {
    if(t->nodetype == VALUE_NODE) return t->varvalue;

    else if (t->nodetype == OPERATOR_NODE)
        switch(*(t->varname)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
            case '-' : return evaluate(t->left) - evaluate(t->right);
            case '*' : return evaluate(t->left) * evaluate(t->right);
            case '/' : return evaluate(t->left) / evaluate(t->right);
        }
}