#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void display(Process p){
      printf("\n %d\t | %d",p.pid,p.but);

}

int main()
{
 Process p;
 Queue q;
 createqueue(&q);
 int i=0;
 while(i<3){
    scanf("%d %d",&p.pid,&p.but);
    enqueue(p,&q);
    i++;
 }
 traversequeue(&q,&display);
 dequeue(&p,&q);
 traversequeue(&q,&display);

     return 0;
}
