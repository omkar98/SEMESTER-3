#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void insert_beg(int ele)
{
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 temp->data=ele;

 if(front==NULL && rear==NULL)
 {
   front=rear=temp;
   temp->next=front;
 }
 else
 {
   temp->next=front;
   front=temp;
   rear->next=front;
 }
}

void insert_end(int ele)
{
  if(front==NULL && rear==NULL)
 {
   insert_beg(ele);
 }
 else
 {
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=ele;
  rear->next=temp;
  rear=temp;
  rear->next=front;
 }
}

void delete_beg()
{
  struct node *temp=front;
  if(temp==NULL)
    printf("Cannot delete element. Underflow\n");
  else if(front==rear)
  {
     front=rear=NULL;
     free(temp);
  }
  else
  {
    front=temp->next;
    rear->next=front;
    temp->next=NULL;
    free(temp);
  }
}

void delete_end()
{
  struct node *temp;
  temp=front;
  if(temp==NULL)
    printf("Underflow Condition.\n");
  else if(front==rear)
  {
     front=rear=NULL;
     free(temp);
  }
  else
  {
   while(temp->next!=rear)
     {
       temp=temp->next;
     }
    rear=temp;
    temp=temp->next;
    rear->next=front;
    temp->next=NULL;
    free(temp);
  }
}

int count(void)
{
 struct node *temp=front;
 int count=1;
 while(temp->next!=front)
 {
  temp=temp->next;
  count++;
 }
 return(count);
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
    struct node *temp1=front;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;

    for(i=0;i<pstn-2;i++)
    {
     temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
   }
  }
  else
  {
    printf("\nThe last position of the element is %d. Hence, cannot insert %d at %d position.", k,ele,pstn);
  }
}

void delete_any(int pstn)
{
  int k,i;
  struct node *temp=front;
  struct node *temp1=front;
  k=count();

  if(pstn<=k)
  {
   if(pstn==1)
     delete_beg();
   else if(pstn==k)
      delete_end();
   else
   {
    for(i=0;i<pstn-2;i++)
     {
      temp=temp->next;
     }
     temp1=temp->next;
     temp->next=temp1->next;

     printf("\nDeleted [ %d | %d ] node.\n", temp1->data, temp1->next);
     temp1->next=NULL;

     free(temp1);
   }
  }
  else
  {
   printf("\nTotal elements: %d. Hence there is not element at %d position.\n", k, pstn);
  }
}

void display()
{
 struct node *temp=front;
 printf("\nFront(%d)", front);

 do
 {
   printf("-->[%d(%d) | %d]", temp->data,temp,temp->next);
   temp=temp->next;
 }
 while(temp!=front);
 printf("<--Rear(%d)", rear);

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
