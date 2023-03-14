#ifndef CQUEUE_H_INCLUDED
#define CQUEUE_H_INCLUDED
#define maxqueue 5
#define queueEntry int
typedef struct cqueue{
int f;
int r;
int size;
queueEntry data[maxqueue];

}Queue;

void createqueue(Queue*);
void destroyqueue(Queue*);
void enqueue(queueEntry,Queue*);
void dequeue(queueEntry*,Queue*);
int emptyqueue(Queue*);
int  fullqueue(Queue*);
int emptyqueue(Queue*);
int queuesize(Queue*);
void traversequeue(Queue*,void(*)(queueEntry));
queueEntry queuelastElemenet(Queue*);
queueEntry queuefirstElemenet(Queue*);
void copyQueue(Queue*,Queue*);










#endif // CQUEUE_H_INCLUDED
