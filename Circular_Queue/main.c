#include <stdio.h>
#include <stdlib.h>
#include "cqueue.h"

void display(queueEntry e){
printf("%d \n",e);
}

int main()
{
  Queue q;
  createqueue(&q);
  queueEntry e;
  int i=0;
  while(i<5){

    scanf("%d",&e);
    enqueue(e,&q);
    i++;
    }

    i=0;
    traversequeue(&q,&display);


      while(i<5){

     dequeue(&e,&q);
     printf("\n %d",e);
    i++;
    }


     return 0;
}
