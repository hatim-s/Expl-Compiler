// #include "headers.h"
#include "symtab.h"
#include "type.h"
#include "class.h"

/* Tree Generation Happens Here */

bool compareTypes (TreeNode* left, TreeNode* right) {
    TypeTable *ltype = left->datatype, *rtype = right->datatype;
    ClassTable *lctype = left->classtype, *rctype = right->classtype;

    if (ltype == rtype) return true;
    if (ltype != getTypeNode ("INT") && ltype != getTypeNode ("STR") && rtype == getTypeNode ("NULL")) return true;
    if (ltype != getTypeNode ("INT") && ltype != getTypeNode ("STR") && right->nodetype == HEAP_NODE) return true;

    if (lctype != NULL && rctype != NULL) {
        ClassTable *current = rctype;
        while (current) {
            if (current == lctype) return true;
            current = current->parent;
        }
    }

    return false;
}

TreeNode* createTreeNode (int nodetype, TypeTable *datatype, int varvalue, char* varname, TreeNode* l, TreeNode* r) {
    TreeNode* temp = (TreeNode*) malloc (sizeof (TreeNode));

    temp->nodetype = nodetype, temp->datatype = datatype, temp->classtype = NULL;
    temp->varvalue = varvalue, temp->varname = NULL; temp->left = l, temp->right = r;

    if (varname){
        temp->varname = (char*) malloc (sizeof (char) * strlen (varname));
        strcpy (temp->varname, varname);
    }

    return temp;
}

TreeNode* makeConnectorNode (TreeNode* l, TreeNode* r) {
    return createTreeNode (CONNECTOR, NULL, -1, NULL, l, r);
}

TreeNode* makeOperatorNode (char* c,TreeNode *l,TreeNode *r) {
    if (compareTypes (l, r) == false) {
        printf ("Error: type mismatch\n");
        printf ("operator: %s\nleft: %s, %d, %s\nright: %s, %d, %s\n", 
                c, l->varname, l->nodetype, l->datatype->name, r->varname, r->nodetype, r->datatype->name);
        
        exit (1);
    }

    TypeTable *type = getTypeNode ("INT");
    
    if (c == "=") type = r->datatype;

    if (c == "<" || c == ">" || c == "==" || c == "<=" || c == ">=" || c == "!=" || c == "&&" || c == "||" || c == "~")
        type = getTypeNode ("BOOL");
        
    return createTreeNode (OPERATOR_NODE, type, -1, c, l, r);
}

/* ------------------------------------------------------------ Library Calls & Associated Nodes -------------------------------------------------------- */

TreeNode* makeReadNode (TreeNode* l) {
    return createTreeNode (READ_NODE, NULL, -1, NULL, l, NULL);
}

TreeNode* makeWriteNode (TreeNode* l) {
    return createTreeNode (WRITE_NODE, NULL, -1, NULL, l, NULL);
}

/* ---------------------------------------------------------- Arrays & Associated Nodes ---------------------------------------------------------- */

TreeNode* makeArrayDeclNode (char *name, int size) {
    return createTreeNode (ARRAY_NODE, NULL, size, name, NULL, NULL);
}

TreeNode* makeArrayNode (char *varname, TreeNode* index) {
    return createTreeNode (ARRAY_NODE, getVariableType (varname), -1, varname, index, NULL);
}

/* ---------------------------------------------------------- Conditional Constructs & Associated Nodes ---------------------------------------------- */

TreeNode* makeIfElseNode (TreeNode* cond, TreeNode* ifstmt, TreeNode* elsestmt) {
    TreeNode* elseNode = createTreeNode (CONDITIONAL_NODE, NULL, ELSE_NODE, NULL, elsestmt, NULL);
    TreeNode* thenNode = createTreeNode (CONDITIONAL_NODE, NULL, THEN_NODE, NULL, ifstmt, elseNode);
    TreeNode* ifNode = createTreeNode (CONDITIONAL_NODE, NULL, IF_NODE, NULL, cond, thenNode);

    return ifNode;
}

TreeNode* makeIfNode (TreeNode* cond, TreeNode* ifstmt) {
    TreeNode* thenNode = createTreeNode (CONDITIONAL_NODE, NULL, THEN_NODE, NULL, ifstmt, NULL);
    TreeNode* ifNode = createTreeNode (CONDITIONAL_NODE, NULL, IF_NODE, NULL, cond, thenNode);

    return ifNode;
}

TreeNode* makeWhileNode (TreeNode* cond, TreeNode* whilestmt) {
    TreeNode* doNode = createTreeNode (CONDITIONAL_NODE, NULL, DO_NODE, NULL, whilestmt, NULL);
    TreeNode* whileNode = createTreeNode (CONDITIONAL_NODE, NULL, WHILE_NODE, NULL, cond, doNode);

    return whileNode;
}

TreeNode* makeBreakNode () {
    return createTreeNode (BREAK_NODE, NULL, -1, NULL, NULL, NULL);
}

TreeNode* makeContinueNode () {
    return createTreeNode (CONTINUE_NODE, NULL, -1, NULL, NULL, NULL);
}

/* ---------------------------------------------------------- Declaration & Associated Nodes ---------------------------------------------------------- */

TreeNode* makeDeclarationNode (TypeTable* type, ClassTable* classtype, TreeNode *l, TreeNode* varlist) {
    TreeNode *temp = createTreeNode (DECLARATOR, type, -1, NULL, l, varlist);
    temp->classtype = classtype; return temp;
}

TreeNode* makeTypeNode (char* typename) {
    return createTreeNode (TYPE_NODE, getTypeNode (typename), -1, typename, NULL, NULL);
}

TreeNode* makeClassTypeNode (char *classname) {
    TreeNode *temp = createTreeNode (CLASSTYPE_NODE, NULL, -1, classname, NULL, NULL);
    temp->classtype = getClassNode (classname);
    return temp;
}

/* ---------------------------------------------------------- Functions & Associated Nodes ---------------------------------------------------------- */

TreeNode* makeParameterNode (TypeTable *type, char* name) {
    return createTreeNode (PARAMETER_NODE, type, -1, name, NULL, NULL);
}

TreeNode* makeFunctionDeclNode (char* name, TreeNode* l, TreeNode* paramList) {
    return createTreeNode (FUNCTION_NODE, NULL, FUNC_DECL, name, l, paramList);
}

TreeNode* makeFunctionDefNode (TypeTable *type, char* name, TreeNode* paramList, TreeNode* funcBody) {
    return createTreeNode (FUNCTION_NODE, getVariableType (name), FUNC_DEF, name, paramList, funcBody);
}

TreeNode* makeFunctionCallNode (char* name, TreeNode* argList) {
    return createTreeNode (FUNCTION_NODE, getVariableType (name), FUNC_CALL, name, argList, NULL);
}

TreeNode* makeReturnNode (TreeNode* expr) {
    return createTreeNode (RETURN_NODE, expr->datatype, -1, NULL, expr, NULL);
}

/* ---------------------------------------------------------- User-defined Types & Fields ---------------------------------------------------------- */

TreeNode* makeTypeDeclarationNode (char *typename, TreeNode *fieldLst) {
    return createTreeNode (TYPE_DECL, NULL, -1, typename, fieldLst, NULL); 
}

TreeNode* makeFieldDeclNode (char *name, TypeTable *type, ClassTable *classtype) {
    TreeNode *temp  = createTreeNode (FIELD_NODE, type, -1, name, NULL, NULL);
    temp->classtype = classtype;
    return temp;
}

TreeNode* makeFieldNode (char *name, TypeTable *type, int fieldIndex) {
    return createTreeNode (FIELD_NODE, type, fieldIndex, name, NULL, NULL);
}

/* ---------------------------------------------------------- Heap Functions - Init, Alloc, Free ---------------------------------------------------------- */

TreeNode* makeInitNode () {
    return createTreeNode (HEAP_NODE, NULL, INIT_NODE, NULL, NULL, NULL);
}

TreeNode* makeAllocNode () {
    return createTreeNode (HEAP_NODE, getTypeNode ("INT"), ALLOC_NODE, "alloc()", NULL, NULL);
}

TreeNode* makeFreeNode () {
    return createTreeNode (HEAP_NODE, NULL, FREE_NODE, NULL, NULL, NULL);
}

TreeNode* makeNullNode () {
    return createTreeNode (NULL_NODE, getTypeNode ("NULL"), -1, NULL, NULL, NULL);
}

/* ---------------------------------------------------------- Heap Functions - Init, Alloc, Free ---------------------------------------------------------- */

TreeNode* makeNewNode (TreeNode *classnode) {
    TreeNode *temp = createTreeNode (CLASS_NODE, NULL, NEW_NODE, NULL, makeAllocNode (), NULL);
    temp->classtype = getClassNode (classnode->varname);
    return temp;
}

TreeNode* makeDeleteNode () {
    return createTreeNode (CLASS_NODE, NULL, DELETE_NODE, NULL, NULL, NULL);
}

TreeNode* makeMethodDeclNode (char *methodname, TypeTable *type, TreeNode *l, TreeNode *params) {
    return createTreeNode (METHOD_NODE, type, METHOD_DECL, methodname, l, params);
}

TreeNode* makeMethodDefNode (char *methodname, TypeTable *type, TreeNode *params, TreeNode *funcbody) {
    return createTreeNode (METHOD_NODE, type, METHOD_DEF, methodname, params, funcbody);
}

TreeNode* makeMethodCallNode (char *methodname, TreeNode *fieldList, TreeNode *argsList) {
    return createTreeNode (METHOD_NODE, NULL, METHOD_CALL, methodname, fieldList, argsList);
}