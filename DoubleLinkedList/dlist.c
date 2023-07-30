#include "dlist.h"
#include <stdio.h>
#include <stdlib.h>


void create(dlist*list){
    list->head=NULL;
    list->tail=NULL;
    list->size=0;
}
void destroy(dlist*list){
Node*tmp;
while(list->head){
    tmp=list->head->next;
    free(list->head);
    list->head=tmp;

}
list->size=0;
}
void insertNode(info e,dlist*list){

Node *n=(Node*)malloc(sizeof(Node));
n->data=e;
n->next=NULL;
n->prev=NULL;
if(!list->head){
    list->head=n;
    list->tail=n;
}
else{
    n->next=list->tail->next;
    n->prev=list->tail;
    list->tail->next=n;
    list->tail=n;

}
list->size++;


}

//0<=pos<=size
void insertNodeAtPos(int pos,info e,dlist*list){

    Node *n=(Node*)malloc(sizeof(Node));
    Node*curr;
    int i=0;
n->data=e;
n->next=NULL;
n->prev=NULL;
if(pos==0){
    list->head=n;
    list->tail=n;
}
else{
    for(curr=list->head;i<pos-1;i++){
        curr=curr->next;
    }
    n->next=curr->next;
    n->prev=curr;
    curr->next=n;

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
    n->prev=NULL;
    list->size--;
}
}


void deleteNodeAtPos(int pos,info* e,dlist*list){
    int i=0;
    Node* tmp;
    if(!list->head)
        printf("\n List is Empty");
    else{
    Node* curr=list->head;
    Node*n=list->head->next;


        for(curr=list->head;i<pos-1;i++){
        curr=curr->next;
    }

    *e=curr->next->data;
    tmp=curr->next->next;
    tmp->prev=curr;
    free(curr->next);
    curr->next=tmp;

    list->size--;
}
}
void TraverseAsStack(dlist* list,void (*visit)(info e)){
    Node*tmp=list->tail;
while(tmp){
        (*visit)(tmp->data);
        tmp=tmp->prev;

}
}
void TraverseAsQueue(dlist* list,void (*visit)(info e)){
    Node*tmp=list->head;
while(tmp){
        (*visit)(tmp->data);
        tmp=tmp->next;

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

