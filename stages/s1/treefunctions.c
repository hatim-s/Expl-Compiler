#include "headers.h"

/*Tree Generation Happens Here*/

treenode* makeLeafNode(int n) {
    treenode *temp;
    temp = (treenode*)malloc(sizeof(treenode));
    temp->oprtr = NULL;
    temp->value = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

treenode* makeOperatorNode(char c,treenode *l,treenode *r) {
    treenode *temp;
    temp = (treenode*) malloc (sizeof(treenode));
    temp->oprtr = malloc (sizeof(char)); *(temp->oprtr) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate (treenode *t) {
    if(t->oprtr == NULL) return t->value;
    else
        switch(*(t->oprtr)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
            case '-' : return evaluate(t->left) - evaluate(t->right);
            case '*' : return evaluate(t->left) * evaluate(t->right);
            case '/' : return evaluate(t->left) / evaluate(t->right);
        }
}