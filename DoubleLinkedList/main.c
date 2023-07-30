#include <stdio.h>
#include <stdlib.h>

#include "dlist.h"


void display(info e){

printf(" %d  %d \n",e.key,e.val);
}

int main()
{
 info e;
 int i=0;
 dlist l;
 create(&l);

 while(i<4){
  scanf("%d %d",&e.key,&e.val);
  insertNode(e,&l);

 i++;
 }
 printf("\n Print List as Queue \n");
 TraverseAsQueue(&l,&display);
  printf("\n Print List as Stack \n ");

 TraverseAsStack(&l,&display);

 deleteNode(&e,&l);
  printf("\n Print List after deleteing an item \n");
 TraverseAsQueue(&l,&display);
   printf("\n Print List after deleteing an item  as stack\n");
 TraverseAsStack(&l,&display);


     return 0;
}
