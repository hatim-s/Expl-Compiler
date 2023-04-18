#include "headers.h"
#include "symtab.h"

/* Tree Generation Happens Here */

treenode* createTreeNode (int nodetype, int vartype, int varvalue, char* varname, treenode* l, treenode* r) {
    treenode* temp = (treenode*) malloc (sizeof (treenode));

    temp->nodetype = nodetype, temp->vartype = vartype, temp->varvalue = varvalue;
    temp->varname = NULL; temp->left = l, temp->right = r;

    if (varname){
        temp->varname = (char*) malloc (sizeof (char) * strlen (varname));
        strcpy (temp->varname, varname);
    }

    return temp;
}

treenode* makeConnectorNode (treenode* l, treenode* r) {
    return createTreeNode (CONNECTOR, -1, -1, NULL, l, r);
}

treenode* makeOperatorNode (char* c,treenode *l,treenode *r) {
    if (l->vartype != r->vartype) {
        printf ("Error: type mismatch\n");
        printf ("operator: %s\nleft: %s, %d, %d\nright: %s, %d, %d\n", 
                c, l->varname, l->nodetype, l->vartype, r->varname, r->nodetype, r->vartype);
        
        exit (1);
    }

    int type = TYPE_INT;
    if (c == "<" || c == ">" || c == "==" || c == "<=" || c == ">=" || c == "!=" || c == "&&" || c == "||" || c == "~")
        type = TYPE_BOOL;
        
    return createTreeNode (OPERATOR_NODE, type, -1, c, l, r);
}

/* ------------------------------------------------------------ Library Calls & Associated Nodes -------------------------------------------------------- */

treenode* makeReadNode (treenode* l) {
    return createTreeNode (READ_NODE, -1, -1, NULL, l, NULL);
}

treenode* makeWriteNode (treenode* l) {
    return createTreeNode (WRITE_NODE, -1, -1, NULL, l, NULL);
}

/* ---------------------------------------------------------- Arrays & Associated Nodes ---------------------------------------------------------- */

treenode* makeArrayDeclNode (char *name, int size) {
    return createTreeNode (ARRAY_NODE, -1, size, name, NULL, NULL);
}

treenode* makeArrayNode (char *varname, treenode* index) {
    return createTreeNode (ARRAY_NODE, -1, -1, varname, index, NULL);
}

/* ---------------------------------------------------------- Conditional Constructs & Associated Nodes ---------------------------------------------- */

treenode* makeIfElseNode (treenode* cond, treenode* ifstmt, treenode* elsestmt) {
    treenode* elseNode = createTreeNode (CONDITIONAL_NODE, -1, ELSE_NODE, NULL, elsestmt, NULL);
    treenode* thenNode = createTreeNode (CONDITIONAL_NODE, -1, THEN_NODE, NULL,  ifstmt, elseNode);
    treenode* ifNode = createTreeNode (CONDITIONAL_NODE, -1, IF_NODE, NULL, cond, thenNode);

    return ifNode;
}

treenode* makeIfNode (treenode* cond, treenode* ifstmt) {
    treenode* thenNode = createTreeNode (CONDITIONAL_NODE, -1, THEN_NODE, NULL, ifstmt, NULL);
    treenode* ifNode = createTreeNode (CONDITIONAL_NODE, -1, IF_NODE, NULL, cond, thenNode);

    return ifNode;
}

treenode* makeWhileNode (treenode* cond, treenode* whilestmt) {
    treenode* doNode = createTreeNode (CONDITIONAL_NODE, -1, DO_NODE, NULL, whilestmt, NULL);
    treenode* whileNode = createTreeNode (CONDITIONAL_NODE, -1, WHILE_NODE, NULL, cond, doNode);

    return whileNode;
}

treenode* makeBreakNode () {
    return createTreeNode (BREAK_NODE, -1, -1, NULL, NULL, NULL);
}

treenode* makeContinueNode () {
    return createTreeNode (CONTINUE_NODE, -1, -1, NULL, NULL, NULL);
}

/* ---------------------------------------------------------- Declaration & Associated Nodes ---------------------------------------------------------- */

treenode* makeDeclarationNode (treenode* type, treenode* varlist) {
    return createTreeNode (DECLARATOR, -1, -1, NULL, type, varlist);
}

treenode* makeTypeNode (int type) {
    return createTreeNode (TYPE_NODE, type, -1, NULL, NULL, NULL);
}

/* ---------------------------------------------------------- Functions & Associated Nodes ---------------------------------------------------------- */

treenode* makeParameterNode (int type, char* name) {
    return createTreeNode (PARAMETER_NODE, type, -1, name, NULL, NULL);
}

treenode* makeFunctionDeclNode (char* name, treenode* paramList) {
    return createTreeNode (FUNCTION_NODE, -1, FUNC_DECL, name, paramList, NULL);
}

treenode* makeFunctionDefNode (int type, char* name, treenode* paramList, treenode* funcBody) {
    return createTreeNode (FUNCTION_NODE, getVariableType (name), FUNC_DEF, name, paramList, funcBody);
}

treenode* makeFunctionCallNode (char* name, treenode* argList) {
    return createTreeNode (FUNCTION_NODE, getVariableType (name), FUNC_CALL, name, argList, NULL);
}

treenode* makeReturnNode (treenode* expr) {
    return createTreeNode (RETURN_NODE, expr->nodetype, -1, NULL, expr, NULL);
}