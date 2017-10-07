#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>

int ele,count=0;
struct node
 {
  int info;
  struct node *next;
 }
 *head = NULL;

void display()
{
  struct node *temp, *temp1=head;
  if(count==0) printf("Please insert an element to display.");
  printf("\nHEAD(%d)->", head);
  while(temp1!=NULL)
  {
    printf("->|%d(%d)|%d|", temp1->info,temp1,temp1->next);
    temp1=temp1->next;
  }
}

void del_beg()
{
 struct node *temp2=head, *temp3;
 if(head==NULL) printf("Empty List");
 else
 {
   printf("Deleted %d at address %d.", temp2->info,temp2);
   temp3=temp2;
   temp2=temp2->next;
   head=temp2;
   printf(" Linked head node to %d", head);
   free(temp3);
 }
}

int insertatbeg(int ele)
{
  struct node *temp, *temp1=head;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->info=ele;
  temp->next=head;
  head=temp;
  count++;
  printf("Node | %d | %d | is created.\n",ele,temp);
  printf("\nInsert another element('0' to EXIT this operation): ");
  scanf("%d", &ele);
    if(ele==0)
    {
      return 0;
    }
    else
    {
      insertatbeg(ele);
      return 0;
    }
}

void main()
{
  int k,ch;
  clrscr();
  printf("NOTE: '0' cannot be inserted as it is used to exit the operation.\n");
  start:
  k=1;
  printf("\n\t\t====MENU===\n");
  printf("\t[1] Insert from Beginning\n");
  printf("\t[2] Insert from End\n");
  printf("\t[3] Delete from Beginning\n");
  printf("\t[4] Delete from End\n");
  printf("\t[5] Display\n");
  printf("\t[6] EXIT");
  printf("\n\tYour choice: ");
  scanf("%d", &ch);
  switch(ch)
  {
  case 1:
    while(k!=0)
    {
      printf("\nEnter the element to insert: ") ;
      scanf("%d", &ele);
      k=insertatbeg(ele);
      if(k==0) goto start;
    }
  case 3: del_beg();
  goto start;
  case 5: display();
  goto start;

  case 6: exit(0);
  }
 getch();
}
