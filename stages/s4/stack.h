#include "headers.h"

typedef struct stackNode {
    int label1, label2;
    struct stackNode *next;
} stackNode;

struct stack {
    struct stackNode* top;
} S ;

void initialiseStack ();
void pushStack (int label1, int label2);
stackNode* popStack ();
stackNode* peekStack ();