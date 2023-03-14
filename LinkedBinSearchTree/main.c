#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void dis(treeEntry e){
printf("%d ",e);
}

int main()
{
 Tree t;
 createTree(&t);
 treeEntry e;

 int i=0;
 while(i<5){
    scanf("%d",&e);
    insertNode(e,&t);
    i++;
 }
 TraverseInorder(&t,&dis);

     return 0;
}
