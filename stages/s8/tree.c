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
    // if (ltype != getTypeNode ("INT") && ltype != getTypeNode ("STR") && right->nodetype == HEAP_NODE) return true;

    if (lctype != NULL && rctype != NULL) {
        ClassTable *current = rctype;
        while (current) {
            if (current == lctype) return true;
            current = current->parent;
        }
    }

    return false;
}

TreeNode* createTreeNode (int nodetype, int varvalue, char* varname, TreeNode* l, TreeNode* r) {
    TreeNode* temp = (TreeNode*) malloc (sizeof (TreeNode));

    temp->nodetype = nodetype, temp->datatype = NULL, temp->classtype = NULL;
    temp->varvalue = varvalue, temp->varname = NULL; temp->left = l, temp->right = r;

    if (varname){
        temp->varname = (char*) malloc (sizeof (char) * strlen (varname));
        strcpy (temp->varname, varname);
    }

    return temp;
}

TreeNode* makeConnectorNode (TreeNode* l, TreeNode* r) {
    return createTreeNode (CONNECTOR, -1, NULL, l, r);
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
    
    TreeNode *temp = createTreeNode (OPERATOR_NODE, -1, c, l, r);
    temp->datatype = type, temp->classtype = NULL;

    return temp;
}

/* ------------------------------------------------------------ Library Calls & Associated Nodes -------------------------------------------------------- */

TreeNode* makeReadNode (TreeNode* l) {
    return createTreeNode (READ_NODE, -1, NULL, l, NULL);
}

TreeNode* makeWriteNode (TreeNode* l) {
    return createTreeNode (WRITE_NODE, -1, NULL, l, NULL);
}

/* ---------------------------------------------------------- Arrays & Associated Nodes ---------------------------------------------------------- */

TreeNode* makeArrayDeclNode (char *name, int size) {
    return createTreeNode (ARRAY_NODE, size, name, NULL, NULL);
}

TreeNode* makeArrayNode (char *varname, TreeNode* index) {
    TreeNode *temp =  createTreeNode (ARRAY_NODE, -1, varname, index, NULL);
    temp->datatype = getVariableType (varname), temp->classtype = NULL;
    return temp;
}

/* ---------------------------------------------------------- Conditional Constructs & Associated Nodes ---------------------------------------------- */

TreeNode* makeIfElseNode (TreeNode* cond, TreeNode* ifstmt, TreeNode* elsestmt) {
    TreeNode* elseNode = createTreeNode (CONDITIONAL_NODE, ELSE_NODE, NULL, elsestmt, NULL);
    TreeNode* thenNode = createTreeNode (CONDITIONAL_NODE, THEN_NODE, NULL, ifstmt, elseNode);
    TreeNode* ifNode = createTreeNode (CONDITIONAL_NODE, IF_NODE, NULL, cond, thenNode);

    return ifNode;
}

TreeNode* makeIfNode (TreeNode* cond, TreeNode* ifstmt) {
    TreeNode* thenNode = createTreeNode (CONDITIONAL_NODE, THEN_NODE, NULL, ifstmt, NULL);
    TreeNode* ifNode = createTreeNode (CONDITIONAL_NODE, IF_NODE, NULL, cond, thenNode);

    return ifNode;
}

TreeNode* makeWhileNode (TreeNode* cond, TreeNode* whilestmt) {
    TreeNode* doNode = createTreeNode (CONDITIONAL_NODE, DO_NODE, NULL, whilestmt, NULL);
    TreeNode* whileNode = createTreeNode (CONDITIONAL_NODE, WHILE_NODE, NULL, cond, doNode);

    return whileNode;
}

TreeNode* makeBreakNode () {
    return createTreeNode (BREAK_NODE, -1, NULL, NULL, NULL);
}

TreeNode* makeContinueNode () {
    return createTreeNode (CONTINUE_NODE, -1, NULL, NULL, NULL);
}

/* ---------------------------------------------------------- Declaration & Associated Nodes ---------------------------------------------------------- */

TreeNode* makeDeclarationNode (TypeTable* type, ClassTable* classtype, TreeNode *l, TreeNode* varlist) {
    TreeNode *temp = createTreeNode (DECLARATOR, -1, NULL, l, varlist);
    temp->datatype = type, temp->classtype = classtype; 
    return temp;
}

TreeNode* makeTypeNode (char* typename) {
    TreeNode *temp = createTreeNode (TYPE_NODE, -1, typename, NULL, NULL);
    temp->datatype = getTypeNode (typename), temp->classtype = NULL;
    return temp;
}

TreeNode* makeClassTypeNode (char *classname) {
    TreeNode *temp = createTreeNode (CLASSTYPE_NODE, -1, classname, NULL, NULL);
    temp->datatype = NULL, temp->classtype = getClassNode (classname);
    return temp;
}

/* ---------------------------------------------------------- Functions & Associated Nodes ---------------------------------------------------------- */

TreeNode* makeParameterNode (TypeTable *type, char* name) {
    TreeNode *temp = createTreeNode (PARAMETER_NODE, -1, name, NULL, NULL);
    temp->datatype = type, temp->classtype = NULL;
    return temp;
}

TreeNode* makeFunctionDeclNode (char* name, TreeNode* l, TreeNode* paramList) {
    return createTreeNode (FUNCTION_NODE, FUNC_DECL, name, l, paramList);
}

TreeNode* makeFunctionDefNode (TypeTable *type, char* name, TreeNode* paramList, TreeNode* funcBody) {
    TreeNode *temp = createTreeNode (FUNCTION_NODE, FUNC_DEF, name, paramList, funcBody);
    temp->datatype = getVariableType (name), temp->classtype = NULL;
    return temp;
}

TreeNode* makeFunctionCallNode (char* name, TreeNode* argList) {
    TreeNode *temp = createTreeNode (FUNCTION_NODE, FUNC_CALL, name, argList, NULL);
    temp->datatype = getVariableType (name), temp->classtype = NULL;
    return temp;
}

TreeNode* makeReturnNode (TreeNode* expr) {
    TreeNode *temp = createTreeNode (RETURN_NODE, -1, NULL, expr, NULL);
    temp->datatype = expr->datatype, temp->classtype = NULL;
    return temp;
}

/* ---------------------------------------------------------- User-defined Types & Fields ---------------------------------------------------------- */

TreeNode* makeTypeDeclarationNode (char *typename, TreeNode *fieldLst) {
    return createTreeNode (TYPE_DECL, -1, typename, fieldLst, NULL); 
}

TreeNode* makeFieldDeclNode (char *name, TypeTable *type, ClassTable *classtype) {
    TreeNode *temp  = createTreeNode (FIELD_NODE, -1, name, NULL, NULL);
    temp->datatype = type, temp->classtype = classtype;
    return temp;
}

TreeNode* makeFieldNode (char *name, TypeTable *type, int fieldIndex) {
    TreeNode *temp = createTreeNode (FIELD_NODE, fieldIndex, name, NULL, NULL);
    temp->datatype = type, temp->classtype = NULL;
    return temp;
}

/* ---------------------------------------------------------- Heap Functions - Init, Alloc, Free ---------------------------------------------------------- */

TreeNode* makeInitNode () {
    return createTreeNode (HEAP_NODE, INIT_NODE, NULL, NULL, NULL);
}

TreeNode* makeAllocNode () {
    TreeNode *temp = createTreeNode (HEAP_NODE, ALLOC_NODE, "alloc()", NULL, NULL);
    temp->datatype = getTypeNode ("INT"), temp->classtype = NULL;
    return temp;
}

TreeNode* makeFreeNode () {
    return createTreeNode (HEAP_NODE, FREE_NODE, NULL, NULL, NULL);
}

TreeNode* makeNullNode () {
    TreeNode *temp = createTreeNode (NULL_NODE, -1, NULL, NULL, NULL);
    temp->datatype = getTypeNode ("NULL"), temp->classtype = NULL;
    return temp;
}

/* ---------------------------------------------------------- Heap Functions - Init, Alloc, Free ---------------------------------------------------------- */

TreeNode* makeNewNode (TreeNode *classnode) {
    TreeNode *temp = createTreeNode (CLASS_NODE, NEW_NODE, NULL, makeAllocNode (), NULL);
    temp->datatype = NULL, temp->classtype = getClassNode (classnode->varname);
    return temp;
}

TreeNode* makeDeleteNode () {
    return createTreeNode (CLASS_NODE, DELETE_NODE, NULL, NULL, NULL);
}

TreeNode* makeMethodDeclNode (char *methodname, TypeTable *type, TreeNode *l, TreeNode *params) {
    TreeNode *temp = createTreeNode (METHOD_NODE, METHOD_DECL, methodname, l, params);
    temp->datatype = type, temp->classtype = NULL;
    return temp;
}

TreeNode* makeMethodDefNode (char *methodname, TypeTable *type, TreeNode *params, TreeNode *funcbody) {
    TreeNode *temp = createTreeNode (METHOD_NODE, METHOD_DEF, methodname, params, funcbody);
    temp->datatype = type, temp->classtype = NULL;
    return temp;
}

TreeNode* makeMethodCallNode (char *methodname, TreeNode *fieldList, TreeNode *argsList) {
    TreeNode *temp = createTreeNode (METHOD_NODE, METHOD_CALL, methodname, fieldList, argsList);
    // temp->datatype = getMethod (methodname)->type, temp->classtype = NULL;
    return temp;
}