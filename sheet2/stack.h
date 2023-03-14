#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define stackentry int
#define maxStack 5

typedef struct stack{
int top;
stackentry stackdata[maxStack];

}Stack;

void createStack(Stack*);
void push(stackentry,Stack*);
void pop(stackentry*,Stack*);
int stackSize(Stack*);
int fullStack(Stack*);
int emptyStack(Stack*);
void TraverseStack(Stack*,void(*visist)(stackentry e));

stackentry firstEkement(Stack*);
stackentry lastEkement(Stack*);
void destroyStack(Stack*);
void copyStack(Stack*s,Stack*);






#endif // STACK_H_INCLUDED
