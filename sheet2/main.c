#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void displayEntry(stackentry e){
printf("%d \n",e);
}

void displayStackContenets(Stack s){
stackentry e;

while(!emptyStack(&s)){
pop(&e,&s);
 printf("%d \n",e);
}


}


stackentry firstEkement_user(Stack s){
    stackentry e;

while(!emptyStack(&s)){
pop(&e,&s);
  }


    return e;

}

stackentry lastEkement_user(Stack s){
stackentry e;
pop(&e,&s);
return e;

}
void destroyStack_user(Stack*s){
    stackentry e;
while(!emptyStack(s))pop(&e,s);

}
void copyStack_user(Stack s,Stack*d){
        stackentry e;
        Stack tmp;
 createStack(&tmp);
while(!emptyStack(&s)){
pop(&e,&s);
push(e,&tmp);
  }
while(!emptyStack(&tmp)){
    pop(&e,&tmp);
push(e,d);

}

}

int stackSize_user(Stack s){
        int si=0;

    stackentry e;

while(!emptyStack(&s)){
pop(&e,&s);
si++;

  }


    return si;

}


int main()
{

 int i=0;
 stackentry e;
 Stack s,d;
 createStack(&s);
  createStack(&d);


 while(i<5){
    scanf("%d",&e);
    push(e,&s);
    i++;
 }
    // copyStack(&s,&d);
    copyStack_user(s,&d);

    printf("\n Original Stack \n ");
        TraverseStack(&s,&displayEntry);
            printf("\n Copied Stack \n ");

    TraverseStack(&d,&displayEntry);
            printf("\n User Display Function \n ");

    displayStackContenets(s);
   printf("\n size = %d \n",stackSize(&s));
   printf("\n size_user = %d \n",stackSize_user(s));

    printf("\n first eleemnt = %d \n",firstEkement(&s));
  printf("\n user_first eleemnt = %d \n",firstEkement_user(s));

    printf("\n last eleemnt = %d \n",lastEkement(&s));
   printf("\n user_last eleemnt = %d \n",lastEkement_user(s));







     return 0;
}
