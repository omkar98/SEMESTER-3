#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int array[]={10,20,30,40,50,60,70,80,90,100};

void search(int n, int first, int mid, int last)
{
  if(array[mid]!=n && first<=last)
  {
   mid=(first+last)/2;
   if(array[mid]==n)
    {
      printf("The given element is found at position %d.\n", mid+1);
      exit(0);
    }
    else if(array[mid]<n)
    {
      /*mid++;
      first=mid;*/
      search(n,mid+1,mid+1,last);
    }
    else if(array[mid]>n)
    {
      /*mid--;
      last=mid;*/
      search(n,first,mid-1,mid-1);
    }
    else
    {
      printf("Element is not found in the list\n");
      exit(0);
    }
  }
  if(array[mid]==n)
  {
   printf("The element is found at position: %d", mid+1);
   exit(0);
  }
  else
  {
    printf("The element %d doesnot exixt in the list.\n", n);
    exit(0);
  }
}

void main()
{
 int n,i,first=0,last=9,mid;
 clrscr();
 /*printf("Enter the 10 numbers [Ascending order only]:\n ");
 for(i=0;i<10;i++)
  {
     scanf("%d", &array[i]);
  }*/
 printf("\nEnter the element you want to search for: ");
 scanf("%d", &n);
 mid=(first+last)/2;
 search(n,first,mid,last);
  getch();
}
/*OUTPUT
Enter the element you want to search for: 60
The given element is found at position 6.

Enter the element you want to search for: 100
The element is found at position: 10


Enter the element you want to search for: 53                                    
The element 53 doesnot exixt in the list.                                       

*/



















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
