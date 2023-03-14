#include "stack.h"
#include <stdlib.h>
void createStack(Stack *s){
s->size=0;
s->top=NULL;

}
void push(stackentry e,Stack *s){
    StackNode *node=(StackNode*)malloc(sizeof(StackNode));
    node->entry=e;
    node->next=s->top;
    s->top=node;
    s->size++;
}
void pop(stackentry*e,Stack *s){
    StackNode *tmp=s->top;
    *e=s->top->entry;
    s->top=s->top->next;
    s->size--;
    free(tmp);

}
int stackEmpty(Stack*s){
    return s->top==NULL;
}
int stackFull(Stack*s){
    return 0;
}
int stackSize(Stack*s){
    return s->size;

}
void clearStack(Stack*s){
    StackNode *tmp;
    while(s->top){
        tmp=s->top->next;
        free(s->top);
        s->top=tmp;

    }
}
void traverStack(Stack*s,void(*visit)(stackentry e)){
    StackNode *tmp=s->top;
    while(tmp){
        (*visit)(tmp->entry);
        tmp=tmp->next;
    }

}
