#include "tree.h"

/*Tree Generation Happens Here*/

treenode* makeOperatorNode (char* c,treenode *l,treenode *r) {
    if (l->vartype != TYPE_INT || r->vartype != TYPE_INT) {
        printf ("Error: type mismatch\n");
        printf ("operator: %s, left: %d, %d, right: %d, %d\n", c, l->nodetype, l->vartype, r->nodetype, r->vartype);
        exit (0);
    }

    treenode *temp = (treenode*) malloc (sizeof(treenode));

    temp->nodetype = OPERATOR_NODE;
    temp->vartype = TYPE_INT; 
    temp->varvalue = -1;
    temp->varname = c;
    temp->left = l, temp->right = r;

    if (c == "<" || c == ">" || c == "==" || c == "<=" || c == ">=" || c == "!=") {
        temp->vartype = TYPE_BOOL;
    }

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

treenode* makeBreakNode () {
    treenode* temp = (treenode*) malloc (sizeof (treenode));

    temp->nodetype = BREAK_NODE;
    temp->varname = NULL; 
    temp->vartype = temp->varvalue = -1;
    temp->left = NULL, temp->right = NULL;

    return temp;
}

treenode* makeContinueNode () {
    treenode* temp = (treenode*) malloc (sizeof (treenode));

    temp->nodetype = CONTINUE_NODE;
    temp->varname = NULL; 
    temp->vartype = temp->varvalue = -1;
    temp->left = NULL, temp->right = NULL;

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

    temp->nodetype = IDENTIFIER_NODE;

    temp->varname = (char*) malloc (strlen (c) * sizeof (char));
    strcpy (temp->varname, c);

    temp->vartype = -1, temp->varvalue = 0;
    temp->left = NULL, temp->right = NULL;

    return temp;
}

treenode* makeArrayNodeDecl (char *varname, int size) {
    treenode* temp = (treenode*) malloc (sizeof (treenode));
    temp->nodetype = ARRAY_NODE;

    temp->varname = (char*) malloc (strlen(varname) * sizeof(char));
    strcpy (temp->varname, varname);

    temp->vartype = -1; temp->varvalue = size;
    temp->left = temp->right = NULL;
}

treenode* makeArrayNode (char *varname, treenode* index) {
    treenode* temp = (treenode*) malloc (sizeof (treenode));
    temp->nodetype = ARRAY_NODE;

    temp->varname = (char*) malloc (strlen(varname) * sizeof(char));
    strcpy (temp->varname, varname);

    temp->vartype = -1; temp->varvalue = -1;
    temp->left = index; temp->right = NULL;
}

treenode* makeIfElseNode (treenode* cond, treenode* ifstmt, treenode* elsestmt) {
    treenode* ifNode = (treenode*) malloc (sizeof (treenode));
    treenode* thenNode = (treenode*) malloc (sizeof (treenode));
    treenode* elseNode = (treenode*) malloc (sizeof (treenode));

    ifNode->nodetype = CONDITIONAL_NODE, ifNode->varvalue = IF_NODE;
    ifNode->varname = "$", ifNode->vartype = -1;
    ifNode->left = cond, ifNode->right = thenNode;

    thenNode->nodetype = CONDITIONAL_NODE, thenNode->varvalue = THEN_NODE;
    thenNode->varname = "$", thenNode->vartype = -1;
    thenNode->left = ifstmt, thenNode->right = elseNode;

    elseNode->nodetype = CONDITIONAL_NODE, elseNode->varvalue = ELSE_NODE;
    elseNode->varname = "$", elseNode->vartype = -1;
    elseNode->left = elsestmt, elseNode->right = NULL;

    return ifNode;
}

treenode* makeIfNode (treenode* cond, treenode* ifstmt) {
    treenode* ifNode = (treenode*) malloc (sizeof (treenode));
    treenode* thenNode = (treenode*) malloc (sizeof (treenode));

    ifNode->nodetype = CONDITIONAL_NODE, ifNode->varvalue = IF_NODE;
    ifNode->varname = "$", ifNode->vartype = -1;
    ifNode->left = cond, ifNode->right = thenNode;

    thenNode->nodetype = CONDITIONAL_NODE, thenNode->varvalue = THEN_NODE;
    thenNode->varname = "$", thenNode->vartype = -1;
    thenNode->left = ifstmt, thenNode->right = NULL;

    return ifNode;
}

treenode* makeWhileNode (treenode* cond, treenode* whilestmt) {
    treenode* whileNode = (treenode*) malloc (sizeof (treenode));
    treenode* doNode = (treenode*) malloc (sizeof (treenode));

    whileNode->nodetype = CONDITIONAL_NODE, whileNode->varvalue = WHILE_NODE;
    whileNode->varname = "$", whileNode->vartype = -1;
    whileNode->left = cond, whileNode->right = doNode;

    doNode->nodetype = CONDITIONAL_NODE, doNode->varvalue = DO_NODE;
    doNode->varname = "$", doNode->vartype = -1;
    doNode->left = whilestmt, doNode->right = NULL;

    return whileNode;
}

treenode* makeTypeNode (int type) {
    treenode* temp = (treenode*) malloc (sizeof (treenode));
    temp->nodetype = TYPE_NODE;
    temp->vartype = type;
    temp->varvalue = -1, temp->varname = NULL; 
    temp->left = temp->right = NULL;

    return temp;
}

treenode* makeDeclarationNode (treenode* type, treenode* varlist) {
    treenode* temp = (treenode*) malloc (sizeof (treenode));
    temp->nodetype = DECLARATOR;
    temp->left = type, temp->right = varlist;

    temp->varname = NULL; temp->vartype = temp->varvalue = -1;
    return temp;
}

// int evaluate (treenode *t) {
//     if(t->nodetype == VALUE_NODE) return t->varvalue;

//     else if (t->nodetype == OPERATOR_NODE)
//         switch(*(t->varname)){
//             case '+' : return evaluate(t->left) + evaluate(t->right);
//             case '-' : return evaluate(t->left) - evaluate(t->right);
//             case '*' : return evaluate(t->left) * evaluate(t->right);
//             case '/' : return evaluate(t->left) / evaluate(t->right);
//         }
// }