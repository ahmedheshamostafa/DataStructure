#include <stdio.h>
#include <stdlib.h>
#include "queue.h"



void display(Process p){
      printf("%d\t | %d\t |%d\n",p.pid,p.but,p.wt);

}
void displaypid(Process p){
 printf("P%d\t",p.pid);

}

void displayft(Process p){
 printf("%d\t",p.ft);

}

int isNum(char n[10]){

 int i=0;
 while(n[i]){
    if(n[i]>='0'&&n[i]<='9'){
             i++;
    }
    else return 0;
 }
 return 1;
}

int main()
{
 Process p;
 char nps[10],pids[10],buts[10],qts[10];
 int np,qt,nqt=0,totaltime=0,i=0,j=0,k=0;

 float sum=0;
 do{
 printf("Enter Number of Processes:");
 scanf("%s",nps);
 if(isNum(nps)&&atoi(nps)>0){
        np=atoi(nps);
        break;
 }
 else{printf("Please enter number of precess in correct positive integer format \n");}
 }while(1);

 do{
 printf("Enter Qunutume Time:");
 scanf("%s",qts);
 if(isNum(qts)&&atoi(qts)>0){
        qt=atoi(qts);
        break;
 }
 else{printf("Please enter QT in correct positive integer format \n");}
 }while(1);


 Queue q,finished,chart;

 createqueue(&q);
  createqueue(&finished);
    createqueue(&chart);


 printf("PID  Burst\n");

 while(i<np){
scanf("%s %s",pids,buts);
if(isNum(pids)&&isNum(buts)&&atoi(pids)>0&&atoi(buts)>0){
p.pid=atoi(pids);
p.but=atoi(buts);
p.rt=p.but;
enqueue(p,&q);
i++;
 }

     else{printf("Please enter pid and burst in valid positive integer format \n");
     }


 }

 i=0;
 printf("\n");
 while(!emptyqueue(&q)){

                dequeue(&p,&q);

      if(p.rt>0){

            if(p.rt>qt){
                p.rt -=qt;
                nqt++;
                totaltime+=qt;
                p.ft=totaltime;
                enqueue(p,&q);
                enqueue(p,&chart);

            }
            else{
                totaltime+=p.rt;
                printf("%d ",totaltime);
                p.wt=totaltime-p.but;
                sum+=p.wt;
                p.ft=totaltime;
                i++;
                nqt++;

                enqueue(p,&chart);

                enqueue(p,&finished);
            }


      }



}
 printf("\n");


printf("-----------------------\n");
printf("PID\t |BUT\t |WT     \n");
printf("-----------------------\n");
traversequeue(&finished,&display);
printf("-----------------------\n");
printf("\nAverage Waiting Time=%f\n",sum/np);



printf("\n");

for(k=0;k<nqt*8;k++) printf("-");
printf("\n");

traversequeue(&chart,&displaypid);

printf("\n");
for(k=0;k<nqt*8;k++) printf("-");

printf("\n");
printf("0\t");
traversequeue(&chart,&displayft);
printf("\n\n");









     return 0;
}
