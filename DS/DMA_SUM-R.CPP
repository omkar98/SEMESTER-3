AIM: Using C malloc() and free() : Write a C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using malloc() function and then free the memory using free().

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  int n1,n2, *ptr1,*ptr2, i, sum=0;
  clrscr();
  /*Initial memory allocation*/
  printf("Enter the no. of elements to add: ");
  scanf("%d", &n1);
  ptr1=(int*)malloc(n1*sizeof(int));
  printf("Enter the elements into the array.\n");
  for(i=0;i<n1;i++)
  {
   printf("ptr1[%d] : ", i);
   scanf("%d", &ptr1[i]);
   printf("&ptr1[%d] = %u\n", i,&ptr1[i]);
   sum = sum + ptr1[i];
  }
 printf("Sum: %d\n",sum);
 /*New memory allocation*/
 printf("Enter the new size of array: \n");
 scanf("%d", &n2);
 /*realloc() is used to change the previously allocated memory size.*/
 ptr2=(int*)realloc(ptr1,n2);
 sum=0;
 for(i=0;i<n2;i++)
  {
   printf("ptr2[%d] : ", i);
   scanf("%d", &ptr2[i]);
   printf("&ptr2[%d] = %u\n", i,&ptr2[i]);
   sum = sum + ptr2[i];
  }
 printf("New sum: %d\n",sum);
 free(ptr2);
 ptr2=NULL;

/*If ptr=NULL is not used,then after using free(), the pointer will have the same
values as it was entered by the user.*/
 printf("After using free(), we get:\n ");
  for(i=0;i<n2;i++)
  {
    printf("ptr2[%d]=%d and &ptr2[%d]=%u\n", i,ptr2[i],i,&ptr2[i]);
  }
 getch();
}
OUTPUT
Enter the no. of elements to add: 3
Enter the elements into the array.
ptr1[0] : 5
&ptr1[0] = 2074
ptr1[1] : 8
&ptr1[1] = 2076
ptr1[2] : 4
&ptr1[2] = 2078
Sum: 17
Enter the new size of array: 5
ptr2[0] : 7
&ptr2[0] = 2074
ptr2[1] : 4
&ptr2[1] = 2076
ptr2[2] : 6
&ptr2[2] = 2078
ptr2[3] : 3
&ptr2[3] = 2080
ptr2[4] : 8
&ptr2[4] = 2082
New sum: 28
After using free(), we get:
ptr2[0]=0 and &ptr2[0]=0
ptr2[1]=0 and &ptr2[1]=2
ptr2[2]=28482 and &ptr2[2]=4
ptr2[3]=27762 and &ptr2[3]=6
ptr2[4]=28257 and &ptr2[4]=8






