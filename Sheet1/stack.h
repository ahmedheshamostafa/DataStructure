#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define stackentry char
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





#endif // STACK_H_INCLUDED
