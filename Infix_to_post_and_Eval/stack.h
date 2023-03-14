#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MaxStack 5
#define stackentry char

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
stackentry stackTop(Stack*);
void TraverseStack(Stack*,void(*)(stackentry));

void infix_to_post(char[],char[]);
float infixEval(char[]);
int precednce(char);




#endif // STACK_H_INCLUDED
