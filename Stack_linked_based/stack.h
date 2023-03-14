#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define stackentry int

typedef struct stacknode{
struct stacknode *next;
stackentry entry;

}StackNode;
typedef struct stack{

StackNode *top;
int size;

}Stack;




void createStack(Stack *);
void push(stackentry,Stack *);
void pop(stackentry*,Stack *);
int stackEmpty(Stack*);
int stackFull(Stack*);
int stackSize(Stack*);
void clearStack(Stack*);
void traverStack(Stack*,void(*visit)(stackentry));




#endif // STACK_H_INCLUDED
