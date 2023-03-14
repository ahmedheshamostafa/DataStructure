#include "queue.h"
#include <stdlib.h>


void createqueue(Queue*q){
q->f=NULL;
q->r=NULL;
q->size=0;
}
void destroyqueue(Queue*q){

}
void enqueue(Process e,Queue*q){
 Node *n=(Node*)malloc(sizeof(Node));
 n->data=e;
// printf("\n indie enque %d %d",n->data.pid,n->data.but);
 n->nexr=NULL;

 if(!q->f){
    q->f=n;
    q->r=n;
    n->nexr=q->f->nexr;
 }
 else{
    q->r->nexr=n;
    q->r=n;
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
     printf("\n indie deque %d %d",e->pid,e->but);

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
