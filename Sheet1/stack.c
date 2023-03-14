#include "stack.h"

void createStack(Stack* s){
s->top=-1;


}

void push(stackentry e,Stack*s)
{
    if(s->top==maxStack)printf("\n Error the stack is full \n");
     else
    s->stackdata[++s->top]=e;

}
void pop(stackentry*e,Stack*s){
        if(s->top==-1)printf("\n Error the stack is empty \n");
        else
        *e=s->stackdata[s->top--];
  }
int stackSize(Stack*s){return s->top+1;}
int fullStack(Stack*s){return s->top==maxStack-1;}
int emptyStack(Stack*s){return s->top==-1;};
void TraverseStack(Stack*s,void(*visist)(stackentry e)){
int temp=s->top;
while(temp>=0){
    (*visist)(s->stackdata[temp--]);

}

}
