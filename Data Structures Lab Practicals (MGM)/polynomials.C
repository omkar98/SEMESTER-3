#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void display(void);

struct node
{
  int coef, expo;
  struct node *next;
};
struct node *p1=NULL;
struct node *p2=NULL;
struct node *sum=NULL;

struct node* newnode(int num1, int num2)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->coef=num1;
  temp->expo=num2;
  temp->next=NULL;
  return(temp);
}

void insert_p1(int num1, int num2)
{
  struct node *temp=newnode(num1,num2);
  if(p1==NULL)
    {
       p1=temp;
    }
  else
  {
    struct node *temp1=p1;
    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
}

void insert_p2(int num1, int num2)
{
   struct node *temp=newnode(num1,num2);
  if(p2==NULL)
    {
       p2=temp;
    }
  else
  {
    struct node *temp1=p2;
    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
}

void insert_sum(int num1, int num2)
{
  struct node *temp=newnode(num1,num2);
  if(sum==NULL)
    {
       sum=temp;
    }
  else
  {
    struct node *temp1=sum;

    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
}

void addition()
{
  int k;
  while(p1!=NULL && p2!=NULL)
  {
     if(p1->expo==p2->expo)
     {
	k=p1->coef+p2->coef;
	insert_sum(k,p1->expo);
	p1=p1->next;
	p2=p2->next;
	addition();
     }

      if(p1->expo<p2->expo)
     {
       insert_sum(p2->coef,p2->expo);
       p2=p2->next;
       addition();
     }

     if(p1->expo>p2->expo)
     {
       insert_sum(p1->coef,p1->expo);
       p1=p1->next;
       addition();
     }
     if(p1==NULL)
     {
      while(p2!=NULL)
       {
	insert_sum(p2->coef,p2->expo);
	p2=p2->next;
       }
     addition();
     }

     if(p2==NULL)
     {
      while(p1!=NULL)
      {
	insert_sum(p1->coef,p1->expo);
	p1=p1->next;
      }
      addition();
     }
  }
}


void display()
{
 struct node *temp=sum;
 printf("\nHead(%d)", sum);
 while(temp!=NULL)
 {
   printf("-->[%d|%d(%d)|%d]", temp->coef,temp->expo,temp,temp->next);
   temp=temp->next;
 }
 printf("\n");
 p1=p2=sum=NULL;
 printf("\nThe pointers are now reset to NULL. New values can be entered. \n");
}

void initialize_poly()
{
		   int i,n;
		   printf("\nEnter the no. of terms of Poly-1: ");
		   scanf("%d", &n);
		   for(i=0;i<n;i++)
		   {
		      printf("Enter Coefficient and Exponent: ");
		      scanf("%d %d", &num1, &num2);
		      insert_p1(num1,num2);
		   }
		   printf("\nEnter the no. of terms of Poly-2: ");
		   scanf("%d", &n);
		   for(i=0;i<n;i++)
		   {
		      printf("Enter Coefficient and Exponent: ");
		      scanf("%d %d", &num1, &num2);
		      insert_p2(num1,num2);
		   }

}


int num1,num2;
void main()
{
  int ch;
  clrscr();
   do
  {
   initialize_poly();
   addition();
   display();
   printf("Continue? (1/0): ");
   scanf("%d", &ch);
  }
  while(ch);
  getch();
}
