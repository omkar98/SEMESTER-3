#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 5
int deque[max];
int front=-1,rear=-1;
void display();
void insertfront();
void insertrear();
void deletefront();
void deleterear();
int choice,item;
void main()
{
	clrscr();
	while(1)
	{
	  printf("\n Menu");
	  printf("\n 1.Insert from Front:");
	  printf("\n 2.Insert from Rear:");
	  printf("\n 3.Delete from Front:");
	  printf("\n 4.Delete from Rear:");
	  printf("\n 5.Display");
	  printf("\n 6.Exit\n");
	  scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	insertfront();
	getch();
	break;

	case 2:
	insertrear();
	getch();
	break;

	case 3:
	deletefront();
	getch();
	break;

	case 4:
	deleterear();
	getch();
	break;

	case 5:
	display();
	getch();
	break;

	case 6:
	exit(0);

	default:
	printf("\n Invalid Choice");
	getch();
	break;
	}
	}
}

void insertfront()
{
	if(front==0)
	{
	 printf("\n Queue is FULL");
	}
	else
	 front=front-1;
	 printf("\n Enter a no:");
	 scanf("%d",&item);
	 deque[front]=item;
}

void insertrear()
{
	if(rear==max)
	{
	printf("\n Queue is FULL");
	}
	else
	{
	 rear=rear+1;
	 printf("\n Enter a no.:");
	 scanf("%d",&item);
	 deque[rear]=item;
	}
}

void deletefront()
{
	if(front==max)
	{
	  printf("\n Queue is EMPTY");
	}
	else
	{
	 item=deque[front];
	 front=front+1;
	 printf("\n No. deleted is %d",item);
	}
}

void deleterear()
{
	if(rear==0)
	{
	  printf("\n Queue is EMPTY");
	}
	else
	 {
	  item=deque[rear];
	  rear=rear-1;
	  printf("\n No. deleted is %d",item);
	 }
}

void display()
{
 int i;
 printf("\n The Queue is::");
 for(i=front;i<=rear;i++)
  printf("%d \n ", deque[i]);
}