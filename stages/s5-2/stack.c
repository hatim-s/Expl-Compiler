#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct stackNode {
    int label1, label2;
    struct stackNode *next;
} stackNode;

struct stack {
    struct stackNode* top;
} S ;

void initialiseStack () {
    S.top = NULL;
}

void pushStack (int label1, int label2) {
    stackNode *temp = (stackNode*) malloc (sizeof (stackNode));
    temp->label1 = label1, temp->label2 = label2;
    temp->next = NULL;

    if (S.top == NULL) S.top = temp;
    else {
        temp->next = S.top;
        S.top = temp;
    }
}

stackNode* peekStack () {
    return S.top;
}

stackNode* popStack () {
    stackNode* temp = S.top;
    S.top = S.top->next;
    return temp;
}