#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>

int ele;
struct node
 {
  int info;
  struct node *next;
 }
 *head = NULL;

int insertatbeg(int ele)
{
  int count=0;

  struct node *temp, *temp1=head;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->info=ele;
  temp->next=head;
  head=temp;
  printf("Node | %d | %d | is created.\n",ele,temp);
  printf("\nHEAD(%d)->|%d(%d)|%d|", head,ele,temp,temp->next);
  while(temp1!=NULL)
  {
    printf("->|%d(%d)|%d|", temp1->info,temp1,temp1->next);
    temp1=temp1->next;
  }
  return 1;
}
void main()
{
  int k;
  clrscr();

 while(k)
 {
  printf("\nEnter the element to insert: ") ;
  scanf("%d", &ele);
    if(ele==0) exit(0);
    k=insertatbeg(ele);
 }
  getch();
}