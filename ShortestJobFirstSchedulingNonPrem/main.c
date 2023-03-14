#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


int isNum(char n[10]){

 int i=0,j=0,k=0;
 while(n[i]){
    if(n[i]>='0'&&n[i]<='9'){
             i++;
    }
    else return 0;
 }
 return 1;
}


void display(Process p){
printf("%d %d \n",p.pid,p.but);
}

int main()
{
 Process p;
 char nps[10],pids[10],buts[10];
 int np,totaltime=0;
 do{
 printf("Enter Number of Processes:",&np);
 scanf("%s",nps);
 if(isNum(nps)&&atoi(nps)>=0){
        np=atoi(nps);
        break;
 }
 else{printf("Please enter number of precess in correct positive integer format \n");}
 }while(1);
 int wt[np];
 int ft[np];
 int pid[np];


 Queue q;

 createqueue(&q);
 int i=0,j=0,k=0;
 printf("PID  Burst\n");

 while(i<np){
scanf("%s %s",pids,buts);
if(isNum(pids)&&isNum(buts)&&atoi(pids)>=0&&atoi(buts)>=0){
p.pid=atoi(pids);
p.but=atoi(buts);
p.priority=p.but;
enqueue(p,&q);
i++;
 }

     else{printf("Please enter pid and burst in valid positive integer format \n");
     }


 }
i=0;
  wt[0]=0;
//dequeue(&p,&q);
float sum=0;
printf("-----------------------\n");
printf("PID\t|Bur\t|WT\n");
printf("-----------------------\n");

while(!emptyqueue(&q)){

                dequeue(&p,&q);
                      printf("P%d\t|%d\t%d\n",p.pid,p.but,wt[i]);

        sum+=wt[i];
            ft[i]=wt[i]+p.but;
            totaltime+=ft[i];
            pid[i]=p.pid;

        i++;
    wt[i]=wt[i-1]+p.but;
   // printf("%d %d\n",p.but,wt[i]);


}
printf("-----------------------\n");



printf("\nAverage Waiting Time=%f\n",sum/np);
//-------------

printf("\n");

for(k=0;k<np*8;k++) printf("-");
printf("\n");
j=0;
while(j<np){
 printf("P%d\t",pid[j++]);
}
printf("\n");
for(k=0;k<np*8;k++) printf("-");

j=0;
printf("\n");
printf("0\t");
while(j<np){
 printf("%d\t",ft[j++]);
}




     return 0;
}
