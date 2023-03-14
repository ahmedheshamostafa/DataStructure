#include "cqueue.h"


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
void enqueue(queueEntry e,Queue*q){
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
void dequeue(queueEntry*e,Queue*q){
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
void traversequeue(Queue*q,void(*visit)(queueEntry e)){
     int i=1;
    int tmp=q->f;
    while(tmp<q->size)
        (*visit)(q->data[tmp++]);

}

queueEntry queuelastElemenet(Queue*q){
return q->data[q->r];
}
queueEntry queuefirstElemenet(Queue*q){
return q->data[q->f];

}
void copyQueue(Queue*s,Queue*d){
    int tmp=s->f,i=0;
    while(i<s->size){
        d->r=(d->r+1)%maxqueue;
        d->data[d->r]=s->data[tmp];
        tmp=(tmp+1)%maxqueue;
        i++;
        d->size++;

    }

}
