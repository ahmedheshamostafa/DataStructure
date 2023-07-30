#include "dlist.h"
#include <stdlib.h>


void create(dlist*list){
    list->head=NULL;
    list->tail=NULL;
    list->size=0;
}
void destroy(dlist*list){
Node*tmp;
while(list->size){
    tmp=list->head->next;
    free(list->head);
    list->head=tmp;
    list->size--;


}
}
void insertNode(info e,dlist*list){

Node *n=(Node*)malloc(sizeof(Node));
n->data=e;
n->next=NULL;
n->prev=NULL;
if(!list->head){
    list->head=n;
    list->tail=n;
    n->next=list->head;
    n->prev=list->tail;
}
else{
    n->next=list->head;
    n->prev=list->tail;
    list->tail->next=n;
    list->tail=n;
}
list->size++;
}



void deleteNode(info* e,dlist*list){
if(!list->head)printf("\n List is Empty");
else{
    Node*n=list->head->next;
    *e=list->head->data;
    free(list->head);
    list->head=n;
    n->prev=list->tail;
    list->size--;
}
}


void TraverseAsStack(dlist* list,void (*visit)(info e)){
    Node*tmp=list->tail;
        int size=list->size;

while(size){
        (*visit)(tmp->data);
        tmp=tmp->prev;
        size--;

}
}
void TraverseAsQueue(dlist* list,void (*visit)(info e)){
    Node*tmp=list->head;
    int size=list->size;
while(size){
        (*visit)(tmp->data);
        tmp=tmp->next;
        size--;

}
}
int isEmpty(dlist*list){
return list->size==0;
}
int isFull(dlist*list){
    return 0;
}
int listSize(dlist*list){
    return list->size;
}

