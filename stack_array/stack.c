#include "stack.h"
#include "stdlib.h"



void createStack(Stack* s){
s->top=-1;
 }
void push(stackentry e,Stack* s){
    if(s->top==maxStack)printf("\n Error the stack is full \n");
     else
     s->entry[++s->top]=e;
}
void pop(stackentry*e,Stack*s){
    if(s->top==-1)printf("\n Error the stack is empty \n");
     else
    *e=s->entry[s->top--];


}
int EmptyStack(Stack*s){
    return s->top==-1;
}
int FullStack(Stack*s){
    return s->top==MaxStack-1;
}
int Stacksize(Stack*s){
    return s->top+1;
}
void DestroyStack(Stack*s){
    s->top=-1;
 }
void TraverseStack(Stack*s,void(*visit)(stackentry e)){
    int i=s->top;
    while(i>0){
        (*visit)(s->entry[i--]);

    }

}
