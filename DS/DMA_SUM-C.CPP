AIM: Using C calloc() and free() : Write a C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using malloc() function and then free the memory using free()
/*Calloc means contigious allocation*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  int n, *ptr, i, sum=0;
  clrscr();
  printf("Enter the no. of elements to add: ");
  scanf("%d", &n);
   /*calloc function returns a void pointer, which points
    to the base address of array. This void pointer in then casted into
    the required data-type*/
  ptr=(int*)calloc(n,sizeof(int));
  printf("The array elements are initialized as follows:\n ");
  /*calloc() initializes all the elements of the array to zero*/
  for(i=0;i<n;i++)
  {
    printf("ptr[%d]=%d and &ptr[%d]=%u\n", i,ptr[i],i,&ptr[i]);
  }
  printf("Enter the elements into the array.\n");
  for(i=0;i<n;i++)
  {
   printf("ptr[%d] : ", i);
   scanf("%d", &ptr[i]);
   printf("&ptr[%d] = %u\n", i,&ptr[i]);
   sum = sum + ptr[i];
  }
 printf("Sum: %d\n",sum);
 free(ptr);
 ptr=NULL;
/*If ptr=NULL is not used,then after using free(), the pointer will have the same
values as it was entered by the user.*/
 printf("After using free(), we get:\n ");
  for(i=0;i<n;i++)
  {
    printf("ptr[%d]=%d and &ptr[%d]=%u\n", i,ptr[i],i,&ptr[i]);
  }
/*In calloc, after the elements are freed, the pointer has
   either Garbage values or resets the values(i.e stores 0).
   This process of free() is compiler dependent. In Turbo C++
   after malloc(), if free() is used, only the first 2 values
   of ptr are set to 0, and rest all are garbage values. */
 getch();
}
//OUTPUT:
Enter the no. of elements to add: 5
The array elements are initialized as follows:
 ptr[0]=0 and &ptr[0]=2070
ptr[1]=0 and &ptr[1]=2072
ptr[2]=0 and &ptr[2]=2074
ptr[3]=0 and &ptr[3]=2076
ptr[4]=0 and &ptr[4]=2078
Enter the elements into the array.
ptr[0] : 4
&ptr[0] = 2070
ptr[1] : 7
&ptr[1] = 2072
ptr[2] : 2
&ptr[2] = 2074
ptr[3] : 5
&ptr[3] = 2076
ptr[4] : 9
&ptr[4] = 2078
Sum: 27
After using free(), we get:
ptr[0]=0 and &ptr[0]=0
ptr[1]=0 and &ptr[1]=2
ptr[2]=28482 and &ptr[2]=4
ptr[3]=27762 and &ptr[3]=6
ptr[4]=28257 and &ptr[4]=8





