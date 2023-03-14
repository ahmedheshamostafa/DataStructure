#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void display(stackentry e){

printf("%d\n",e);
}
int main()
{
    stackentry e;
    Stack s;
    createStack(&s);
    int i=0;
    while(i<5){
    printf("Enter an stack Elemnt \n");
    scanf("%d",&e);
    push(e,&s);
    i++;
    }
    i=0;
    printf("size =%d\n",stackSize(&s));
    traverStack(&s,&display);
    printf("size =%d\n",stackSize(&s));

    while(i<5){
        pop(&e,&s);
        printf("%d\n",e);
        i++;
    }
    f
    printf("size =%d\n",stackSize(&s));

    return 0;
}
