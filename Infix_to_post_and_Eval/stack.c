#include "stack.h"
#include "stdlib.h"
#include <string.h>
#include <math.h>



void createStack(Stack* s){
s->top=-1;
 }
void push(stackentry e,Stack* s){
    if(s->top==MaxStack-1)printf("\n Error the stack is full \n");
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

int isDigit(char op){return op>='0'&&op<='9';}
int isOperator(char op){return op=='+'||op=='-'||op=='*'||op=='/'||op=='^';}
stackentry stackTop(Stack*s){return s->entry[s->top];}

int precednce(char op){

    if(op=='+'||op=='-')return 1;
    if(op=='/'||op=='*')return 2;
    if(op=='^')return 3;
    return 0;

}

void infix_to_post(char infix[],char post[]){

Stack s;
createStack(&s);

char e,t;
int i=0,j=0;
for(;infix[i]!='\0';i++){
        e=infix[i];
     if(isDigit(e)){
        post[j]=e;
         j++;
    }

    else if(e=='('){push(e,&s);}
    else if(e==')'){
         while(t!='('){
            pop(&t,&s);
            if(t!='('){
            post[j]=t;
             j++;
         }
         }
    }
    else {
      while(!EmptyStack(&s)&&precednce(stackTop(&s))>=precednce(e)){
            pop(&t,&s);
            post[j]=t;
             j++;



      }
      push(e,&s);

    }

}
    while(!EmptyStack(&s)){
        pop(&t,&s);
        post[j]=t;
                 j++;



    }
    post[j]='\0';

return post;
}
float opval(char op,double val1,double val2){
if(op=='+')return val1+val2;
if(op=='-')return val1-val2;
if(op=='/')return val1/val2;
if(op=='*')return val1*val2;
if(op=='^')return  pow(val1,val2);

}
float infixEval(char infix[]){
    int i=0;
    Stack s;
    char e,val1,val2;
    float res;
    createStack(&s);
    for(;infix[i];i++){
        e=infix[i];
        if(isDigit(e)){
            push(e,&s);
        }
        else{
              pop(&val2,&s)  ;
              pop(&val1,&s)  ;
              push(opval(e,(float)val1-'0',(float)val2-'0')+'0',&s);


        }
    }
    pop(&val1,&s);
    res=(float)(val1-'0');
    return res;

    //for(;)

}





