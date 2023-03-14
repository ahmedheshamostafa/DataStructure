#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void displayEntry(stackentry e){
printf("%c \n",e);
}

void displayStackContenets(Stack *s){
stackentry e;
Stack *tmp;
createStack(&tmp);
while(!emptyStack(s)){
pop(&e,s);
push(e,&tmp);
printf("%c \n",e);
}
while(!emptyStack(&tmp)){
    pop(&e,&tmp);
push(e,s);
}

}

int main()
{
 Stack*s;
 createStack(&s);
 stackentry e;
 char c;
 while(1){
    printf("\n(a) Read an element then Push it.\n(b) Pop an element then display it.\n(c) Display Stack Size.\n(d)Print contents of The Stack .\n(e) Exit.\n ");
    printf("Enter choice:");
             scanf("%c",&c);
             getchar();
    switch(c){
    case 'a':printf("\nEnter element to push into stack:");
             scanf("%c",&e);
             push(e,&s);
            getchar();
           break;

    case 'b':pop(&e,&s);
            printf("\npopeoed element from stack is %c\n",e);
            break;
    case 'c':printf("the size of stack is %d\n",stackSize(&s));
            break;
    case 'd':    displayStackContenets(&s); //TraverseStack(&s,&displayEntry);
            break;
    case 'e':exit(0);
    default:printf("\n ****** Enter correct choice ****** \n");

 }

  }
     return 0;
}
