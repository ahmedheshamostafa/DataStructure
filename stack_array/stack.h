#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MaxStack 5
#define stackentry int

typedef struct stack{
    int top;
     stackentry entry[MaxStack];
}Stack;


void createStack(Stack*);
void push(stackentry,Stack*);
void pop(stackentry*,Stack*);
int EmptyStack(Stack*);
int FullStack(Stack*);
int Stacksize(Stack*);
void DestroyStack(Stack*);
void TraverseStack(Stack*,void(*)(stackentry));




#endif // STACK_H_INCLUDED
