#include <stdio.h>
#include <stdlib.h>
#include "cqueue.h"



void destroyqueue_user(Queue*q){
    queueEntry e;

    while(!emptyqueue(q)){
    dequeue(&e,q);
    }

}

queueEntry queuelastElemenet_user(Queue q){

    queueEntry e;

    while(!emptyqueue(&q)){
    dequeue(&e,&q);
    }

    return e;
}
queueEntry queuefirstElemenet_user(Queue q){

    queueEntry e;
    dequeue(&e,&q);
    return e;
}
void copyQueue_user(Queue q,Queue*d){

    queueEntry e;
while(!emptyqueue(&q)){
    dequeue(&e,&q);
    enqueue(e,d);
      }
}

int queuesize_user(Queue q){

    queueEntry e;
    int size=0;

    while(!emptyqueue(&q)){
    dequeue(&e,&q);
    size++;

    }
    return size;
}

void display(queueEntry e){
printf("%d\n",e);
}

/***************************/

int main()
{
Queue q,d;
  createqueue(&q);
  createqueue(&d);
  queueEntry e;
  int i=0;
  while(i<5){

    scanf("%d",&e);
    enqueue(e,&q);
    i++;
    }

    i=0;
   // copyQueue(&q,&d);
    copyQueue_user(q,&d);

    printf("\n Source Queue \n");
    traversequeue(&q,&display);
    printf("\n Destination Queue \n");

    traversequeue(&d,&display);
    printf("The size of queue d =%d\n",queuesize(&d));
    printf("user_The size of queue d =%d\n",queuesize(&d));
    printf("user_The first element =%d\n",queuefirstElemenet_user(q));
    printf("user_The last element =%d\n",queuelastElemenet_user(q));
    printf("The first element =%d\n",queuefirstElemenet(&q));
    printf("The last element =%d\n",queuelastElemenet(&q));
    return 0;
}
