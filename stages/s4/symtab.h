#include "headers.h"

typedef struct symtableNode {
    char* var;
    int location, type, size;
    struct symtableNode* next; 
} symtableNode;

typedef struct symTable {
    struct symtableNode *head;
} symTable;

symTable T;

void initializeTable ();
int getNewLocation (int size);
void addVariable (char* variable, int type, int size);
int getVariableLocation (char* variable);
// int getVariableLocation (char* variable, int size);