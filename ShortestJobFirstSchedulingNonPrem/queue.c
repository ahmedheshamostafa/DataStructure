#include "queue.h"
#include <stdlib.h>


void createqueue(Queue*q){
q->f=NULL;
q->r=NULL;
q->size=0;
}

void enqueue(Process e,Queue*q){
 Node *n=(Node*)malloc(sizeof(Node));
 n->data=e;
 Node*prev=NULL;
 //printf("\n indie enque %d %d %d",n->data.pid,n->data.but,n->data.priority);
 n->nexr=NULL;


 if(!q->f){
    q->f=n;
    q->r=n;
    n->nexr=q->f->nexr;
  }
  else{
    if(q->f->data.priority>e.priority){
      //  printf("\n Process is greater than front");
        n->nexr=q->f;
        q->f=n;
    }


   else{
    Node*tmp=q->f;
    prev=tmp;
  // printf("\n Process is less than front");
    while(tmp->data.priority<=e.priority&&tmp){
              // printf("\n inside loop to find best pos");

        prev=tmp;
              tmp=tmp->nexr;
   //   printf("\n prev %d curr %d",prev->data.priority,tmp->data.priority);



    }

   if(!tmp){
     //   printf("\n Insert data into end of queue");
    tmp->nexr=n;
   }
   else{
         //  printf("\n Insert data into new prio pos");
    prev->nexr=n;
    n->nexr=tmp;
   }
   }
  }
 q->size++;



}
void dequeue(Process*e,Queue*q){
    Node*n=q->f->nexr;
     if(!q->f){
    printf("\n Queue is empty \n");
 }
 else{
    *e=q->f->data;
    // printf("\n indie deque %d %d",e->pid,e->but);

    free(q->f);
    q->f=n;
    q->size--;
 }

}
int emptyqueue(Queue*q){
return q->size==0;
}
int  fullqueue(Queue*q){
return 0;

}
int queuesize(Queue*q){
return q->size;
}
void traversequeue(Queue*q,void(*visit)(Process e)){
    Node* tmp=q->f;
    while(tmp){
        (*visit)(tmp->data);
        tmp=tmp->nexr;
    }

}
