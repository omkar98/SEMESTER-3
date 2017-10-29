#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
  struct node *temp=newnode(int num1, int num2);
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
   struct node *p2=newnode(int num1, int num2);
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
  struct node *temp=newnode(int num1, int num2);
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
while(p1!==NULL && p2!==NULL)
   {
     if(p1->num2==p2->num2)
     {
        k=p1->num1+p2->num1;
        insert_sum(k,p1->num2);
        p1=p1->next;
        p2=p2->next;
        addition();
     }

     else if(p1->num2<p2->num2)
     {
       insert_sum(p2->num1,p2->num2);
       p2=p2->next;
       addition();
     }

     else if(p1->num2>p2->num2)
    {
       insert_sum(p1->num1,p1->num2);
       p1=p1->next;
       addition();
    }

     else if(p1==NULL)
    {
      while(p2!==NULL)
      {
        insert_sum(p2->num1,p2->num2);
        p2=p2->next;
      }
     addition();
    }
  
     else if(p2==NULL)
    {
      while(p1!==NULL)
      {
        insert_sum(p1->num1,p1->num2);
        p1=p1->next;
      }
      addition();
    }
  }
 else
  {
     display();
   }
}

void display()
{
 struct node *temp=sum;
 printf("\nHead(%d)", sum);
 while(temp!=NULL)
 {
   printf("-->[%d|%d(%d)|%d]", temp->num1,temp->num2,temp,temp->next);
   temp=temp->next;
 }
 printf("\n");
}

int num1,num2;
void main()
{
  int ch, i,n;
  clrscr();
  do
  {
  printf("\t=====MENU=======\n");
  printf("\t1] Addition\n");
  printf("\t2] Multiplication\n");
  printf("\t3] Evaluation\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
    switch(ch)
    {
      case 1:
                   printf("\nEnter the no. of terms of Poly-1: ");
	scanf("%d", &n);
                   for(i=0;i<n;i++)
                   {
                      printf("Enter Coefficient and Exponent: ");
                      scanf("%d, %d", &num1, &num2);
                      insert_p1(num1,num2);
                   }
                  printf("\nEnter the no. of terms of Poly-2: ");
	scanf("%d", &n);
                   for(i=0;i<n;i++)
                   {
                      printf("Enter Coefficient and Exponent: ");
                      scanf("%d, %d", &num1, &num2);
                      insert_p2(num1,num2);
                   }
                 }
                     addition();
	   break;
        case 2: 
        case 3: break;               
    }
  }
  while(ch);
  getch();
}
