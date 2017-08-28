#include<stdio.h>
#include<conio.h>


void main()
{
 int ary[30], ele,i,num, pstn,ch;
 clrscr();
 printf("Note: Only 30 elements can be inserted!\n");
 printf("Enter the number of elements you want in the array: ");
 scanf("%d", &num);

  for(i=0;i<num;i++)
  {
    scanf("\t%d", &ary[i]);
  }
  start:
  printf("\nSelect an Operation to be performed:\n\t[1] INSERTION\n\t[2] DELETION\n\t[3] MODIFIY\n\t[4] EXIT");
  printf("\nYour Choice: ");
  scanf("%d", &ch);

  switch(ch)
  {

  case 1:
  printf("Enter the element you want to insert: ");
  scanf("\n%d", &ele);

  printf("Enter the position to insert the element: ");
  scanf("%d", &pstn);

  for(i=num;i>=pstn;i--)
  {
    ary[i]=ary[i-1];
  }

 num++;

 ary[pstn-1]=ele;


  for(i=0;i<num;i++)
  {
   printf("\t%d", ary[i]);
  }

  goto start;

  case 2:

   printf("Enter the position of element you want to delete: ");
   scanf("%d", &pstn);

   for(i=pstn;i<num;i++)
   {
    ary[i-1]=ary[i];
   }

   num--;

   for(i=0;i<num;i++)
   {
    printf("\t%d", ary[i]);
   }
   goto start;

  case 3:
    printf("Enter the position of the element you want to modify: ");
    scanf("%d", &pstn);
    printf("Enter the element you want to insert in %d position: ", pstn);
    scanf("%d", &ele);

    ary[pstn-1]=ele;
    printf("New Array is: ");

    for(i=0;i<num;i++)
    {
     printf("\t%d", ary[i]);
    }

    goto start;

  case 4: break;
  }

  printf("\nProgram Terminated");
  getch();
}

/*============Output============
	[1] INSERTION
	[2] DELETION
	[3] MODIFIY
	[4] EXIT
Your Choice: 2
Enter the position of element you want to delete: 2
	10      90      30      40      50
Select an Operation to be performed:
	[1] INSERTION
	[2] DELETION
	[3] MODIFIY
	[4] EXIT
Your Choice: 3
Enter the position of the element you want to modify: 2

Enter the element you want to insert in 2 position: 20
New Array is:   10      20      30      40      50
Select an Operation to be performed:
	[1] INSERTION
	[2] DELETION
	[3] MODIFIY
	[4] EXIT
Your Choice: 4

Program Terminated
  */













                                                                                
                                                                                
