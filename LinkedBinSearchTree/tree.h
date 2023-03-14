#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#define treeEntry int

typedef struct node{
treeEntry val;
struct node* left;
struct node* right;

}Node;

typedef struct tree{
Node *root;
int size;
}Tree;

void createTree(Tree*);
void insertNode(treeEntry,Tree*);
void deleteNode(treeEntry,Tree*);
void TraverseInorder(Tree*,void(*)(treeEntry));


#endif // TREE_H_INCLUDED
