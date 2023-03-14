#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void display(stackentry e){
printf("%d \n",e);
}
int main()
{
 Stack *s;
 createStack(&s);
 stackentry e;
 int i=0;
 while(i<MaxStack){
    printf("Enter stack elelment :\n");
    scanf("%d",&e);
    push(e,&s);
 }
 printf("size =%d\n",Stacksize(&s));
 TraverseStack(&s,&display);
 printf("size =%d\n",Stacksize(&s));


 while(!EmptyStack(&s)){
        pop(&e,&s);
        printf("%d \n",e);

 }
printf("size =%d\n",Stacksize(&s));

     return 0;
}
