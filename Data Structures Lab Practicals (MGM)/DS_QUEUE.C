#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int num, A[MAX], rear=-1, front=-1;

void enqueue(int num)
{
  if(rear==MAX-1)
  printf("Overflow Condition\n");
  else
  {
    ++rear;
    A[rear]=num;
    printf("Enqueued %d in A[%d]\n", num,rear);
  }
}

void dequeue()
{
  if(front==-1 && rear==-1)
  {
    printf("UnderFlow Condition.\n");
  }
  else if(front<=rear)
  {
     int temp;
       if(front==-1)
	  {
	    ++front;
	  }
       temp = A[front];
       ++front;
       printf("Successfully Dequeued %d.\n", temp);
  }
  else
  {
    printf("Cannot perform dequeue further.");
  }
}

void main()
{
  int ch;
  printf("====MENU====\n") ;
  printf("\t[1] Enqueue\n\t[2] Dequeue\n\t[3] Display\n\t[4] EXIT\n");
  start:
  printf("Enter your choice: ");
  scanf("%d", &ch);
  switch(ch)
  {
    case 1:
       printf("Enter a number to enqueue: ");
       scanf("%d", &num);
       enqueue(num);
       goto start;
    case 2:
	dequeue();
	goto start;
    /*case 3:
	display();
	break;*/
    case 4:
      exit(0);
    default:
	 printf("Please enter a valid choice.");
	 goto start;
  }
}