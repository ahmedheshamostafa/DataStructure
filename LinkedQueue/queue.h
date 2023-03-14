#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define maxqueue 50
typedef struct process{
int pid;
int but;
int rt;
int wt;
int ft;
int priority;
 }Process;

 typedef struct node{
     struct node *nexr;
     Process data;

 }Node;
typedef struct cqueue{
Node *f;
Node *r;
int size;

}Queue;


void createqueue(Queue*);
void destroyqueue(Queue*);
void enqueue(Process,Queue*);
void dequeue(Process*,Queue*);
int emptyqueue(Queue*);
int  fullqueue(Queue*);
int emptyqueue(Queue*);
int queuesize(Queue*);
void traversequeue(Queue*,void(*)(Process));








#endif // CQUEUE_H_INCLUDED
