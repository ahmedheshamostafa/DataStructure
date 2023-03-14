#ifndef DLIST_H_INCLUDED
#define DLIST_H_INCLUDED


typedef struct data{
int key;
int val;
}info;

typedef struct node{
struct node *next;
struct node *prev;
info data;


}Node;


typedef struct list{
Node *head;
Node *tail;
int size;
}dlist;


void create(dlist*);
void destroy(dlist*);
void insertNode(info,dlist*);
void deleteNode(info*,dlist*);
void deleteNodeAtPos(int,info*,dlist*);
void insertNodeAtPos(int,info,dlist*);
void TraverseAsStack(dlist*,void (*)(info));
void TraverseAsQueue(dlist*,void (*)(info));
int isEmpty(dlist*);
int isFull(dlist*);
int listSize(dlist*);



#endif // DLIST_H_INCLUDED
