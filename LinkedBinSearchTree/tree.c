#include "tree.h"
#include <stdlib.h>

void createTree(Tree*t){
t->root=NULL;
t->size=0;
}
void insertNode(treeEntry e,Tree*t){
Node*n=(Node*)malloc(sizeof(Node));

Node*child=t->root;
Node*leaf=t->root;
n->left=NULL;
n->right=NULL;
n->val=e;
if(!t->root){
    t->root=n;
    leaf=t->root;
    child=t->root;
}
else{
    while(child){
            leaf=child;
        if(e<child->val)child=child->left;
        else child=child->right;
    }
    if(e<leaf->val)leaf->left=n;
    else
        leaf->right=n;

}
//printf("\n leaf=%d \n",leaf->val);
t->size++;
}
void deleteNode(treeEntry,Tree*);

void TraverseInorder(Tree*t,void(*visit)(treeEntry e)){
    Node*tmp=t->root;
    if(tmp){
        TraverseInorder(&tmp->left,visit);
        (*visit)(tmp->val);
        TraverseInorder(&tmp->right,visit);


    }

}
