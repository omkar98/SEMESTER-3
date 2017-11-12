#include<stdio.h>
#include<conio.h>

struct node
{
  struct node *left;
  int data;
  struct node *right;
};
struct node *root;

struct node* newnode(int ele)
{
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 temp->left=NULL;
 temp->right=NULL;
 temp->data=ele;
 return (temp);
}

void Preorder(struct node *Node)
{
 if(Node==NULL)
   return;
 printf(" %d ", Node->data);
 Preorder(Node->left);
 Preorder(Node->right);
}

void Inorder(struct node *Node)
{
 if(Node==NULL)
   return;
 Inorder(Node->left);
 printf(" %d ", Node->data);
 Inorder(Node->right);
}

void Postorder(struct node *Node)
{
 if(Node==NULL)
    return;
 Postorder(Node->left);
 Postorder(Node->right);
 printf(" %d ", Node->data);
}

void main()
{

  struct node *root=newnode(1);
    clrscr();
  root->left=newnode(2);
  root->right=newnode(3);
  root->left->left=newnode(4);
  root->left->right=newnode(5);

  printf("\nPreorder Traversal of Binary Tree is: ");
  Preorder(root);
  printf("\nInorder Traversal of Binary Tree: ");
  Inorder(root);
  printf("\nPostorder Traversal of Binary Tree: ");
  Postorder(root);

  getch();
}