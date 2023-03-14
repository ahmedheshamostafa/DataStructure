#include "queue.h"


void createqueue(Queue*q){
q->f=0;
q->r=-1;
q->size=0;
}
void destroyqueue(Queue*q){
q->f=-1;
q->r=-1;
q->size=0;
}
void enqueue(Process e,Queue*q){
    if(q->size==maxqueue)printf("\n Full Queue \n");
    else{

        /*if(q->r==maxqueue-1)
            q->r=0;
        else
            q->r++;*/
        q->r=(q->r +1)%maxqueue;
        q->data[q->r]=e;
        q->size++;

    }


}
void dequeue(Process*e,Queue*q){
        if(q->size==0)printf("\n Empty Queue \n");
    else{
      *e=q->data[q->f];

    q->f=(q->f +1)%maxqueue;

      /* if(q->f==maxqueue)
            q->f=0;
        else
            q->f++;*/
       q->size--;

    }

}
int emptyqueue(Queue*q){
return q->size==0;
}
int  fullqueue(Queue*q){
return q->size==maxqueue;

}
int queuesize(Queue*q){
return q->size;
}
void traversequeue(Queue*q,void(*visit)(Process e)){
    int tmp=q->f;
    while(tmp<q->size)
        (*visit)(q->data[tmp++]);

}
