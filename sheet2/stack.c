#include "stack.h"
#include <stdio.h>

void createStack(Stack* s){
s->top=-1;

}

void push(stackentry e,Stack*s)
{
    if(s->top==maxStack)printf("\n Error the stack is full \n");
    else{
    s->stackdata[++s->top]=e;
     }
}
void pop(stackentry*e,Stack*s){
    if(s->top==-1)printf("\n Error the stack is empty \n");
    else{
*e=s->stackdata[s->top--];
      }
}
int stackSize(Stack*s){

return s->top+1;
}
int fullStack(Stack*s){return s->top==maxStack-1;}
int emptyStack(Stack*s){return s->top==-1;};
void TraverseStack(Stack*s,void(*visist)(stackentry e)){
int temp=s->top;
while(temp>=0){
    (*visist)(s->stackdata[temp--]);

}

}

stackentry firstEkement(Stack*s){

return s->stackdata[0];
}

stackentry lastEkement(Stack*s){
 return s->stackdata[s->top];
}

void destroyStack(Stack*s){
    s->top=-1;

}

void copyStack(Stack*s,Stack*d){
    int i=0;
    if(d->top!=-1)printf("\n Error The Destination stack was not created\n ");
    else{
            if(!s->top!=-1)
 while(i<=s->top)d->stackdata[++d->top]=s->stackdata[i++];
 else printf("\n The source stack is empty\n");
    }
}





