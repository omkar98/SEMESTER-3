#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *head=NULL;

struct node* newnode(int ele)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=ele;
  temp->next=NULL;
  head->prev=NULL;
  return(temp);
}

void insert_beg(int ele)
{
 struct node *temp=newnode(ele);
 temp->next=head;
 head->prev=temp;
 head=temp;
}

void insert_end(int ele)
{
  if(head==NULL)
    insert_beg(ele);
  else
  {
    struct node *temp1=head;
    struct node *temp=newnode(ele);
    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
    temp->prev=temp1;
  }
}

void delete_beg()
{
  struct node *temp=head;
  if(head==NULL)
    printf("Cannot delete element. Underflow\n");
  else if(head->next==NULL)
  {
   temp=head;  
   head=NULL;
   free(temp);     
  }
  else
  {
    head = temp->next;
    free(temp);
    head->prev=NULL;
  }
}

void delete_end()
{
  if(head==NULL)
    printf("Underflow Condition.\n");
  else if(head->next==NULL)
  {
   delete_beg();
  }
  else
  {
    struct node *temp,*temp1;
    temp=temp1=head;
    while(temp->next!=NULL)
	 temp = temp->next;
    temp1=temp->prev;
    temp1->next=NULL;
    free(temp);
  }
}

int count(void)
{
 struct node *temp=head;
 int count=1;
 if(head==NULL)
  {
    count=0;
    return(count);
  }
 while(temp->next!=NULL)
 {
  temp=temp->next;
  count++;
 }
 return (count);
}


void insert_any(int ele, int pstn)
{
  int k,i;
  k=count();
  if(pstn<=k+1)
  {
   if(pstn==1)
     insert_beg(ele);
   else if(pstn==k+1)
     insert_end(ele);
   else
   {
    struct node *temp=newnode(ele);
    struct node *temp1=head;
    for(i=0;i<pstn-2;i++)
    {
     temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
    temp->prev=temp1;
    temp1=temp->next;
    temp1->prev=temp;
   }
  }
  else
  {
    printf("\nThe position of the last element is %d. Hence, cannot insert %d at %d position.", k,ele,pstn);
  }
}

void delete_any(int pstn)
{
  int k,i;
  k=count();

  if(pstn<=k)
  {
   if(pstn==1)
     delete_beg();
   else if(pstn==k)
      delete_end();
   else
   {
     struct node *temp=head;
     struct node *temp1=head;
    for(i=0;i<pstn-2;i++)
     {
      temp=temp->next;
     }
     temp1=temp->next;
     temp->next=temp1->next;
     temp=temp1->next;
     temp->prev=temp1->prev;
     printf("\nDeleted [ %d | %d | %d ] node.\n", temp1->prev, temp1->data, temp1->next);
     free(temp1);
   }
  }
  else
  {
   printf("\nTotal elements: %d. Hence there is no element at %d position.\n", k, pstn);
  }
}

void display()
{
 struct node *temp=head;
 printf("\nHead(%d)", head);
 while(temp!=NULL)
 {
   printf("<-->[%d|%d(%d)|%d]", temp->prev,temp->data,temp,temp->next);
   temp=temp->next;
 }
 printf("\n");
}

int ele,pstn;
void main()
{
  int ch;
  clrscr();
  do
  {
  printf("\t=====MENU=======\n");
  printf("\t1] Insert from Beginning\n");
  printf("\t2] Delete from Beginning\n");
  printf("\t3] Insert from End\n");
  printf("\t4] Delete from End\n");
  printf("\t5] Insert at any position\n");
  printf("\t6] Delete from any position\n");
  printf("\t7] Display.\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
    switch(ch)
    {
     case 1:
	printf("\nEnter the element you want to insert: ");
	scanf("%d", &ele);
	insert_beg(ele);
	break;
     case 2:
	delete_beg();
	break;
     case 3:
	printf("\nEnter the element you want to insert: ");
	scanf("%d", &ele);
	insert_end(ele);
	break;
     case 4:
	delete_end();
	break;
     case 5:
	 printf("\nEnter the element to insert: ");
	 scanf("%d", &ele);
	 printf("\nWhere do you want to insert %d? ", ele);
	 scanf("%d", &pstn);
	 insert_any(ele,pstn);
	 break;
     case 6:
	 printf("\nEnter the position of element you want to delete.");
	 scanf("%d", &pstn);
	 delete_any(pstn);
	 break;
     case 7:
	display();
	break;
    }
  }
  while(ch);
  getch();
}
