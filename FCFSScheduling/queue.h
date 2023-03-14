#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define maxqueue 5
typedef struct process{
int pid;
int but;
int wt;

 }Process;
typedef struct cqueue{
int f;
int r;
int size;
Process data[maxqueue];

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
