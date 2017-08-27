AIM: Using C malloc() and free() : Write a C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using malloc() function and then free the memory using free()
/*Malloc means memory allocation.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 int n, *ptr, sum=0;
 clrscr();
 printf("Enter the number of elements you want to add: ");
 scanf("%d", &n);
 ptr = (int *)malloc(n*sizeof(int));
 /*Here, it returns a pointer that points to the base address memory
   Suppose, ptr = 200 (Let 200 be the base address)
      then, *ptr = 5 (*ptr stores the value(eg. 5) at address 200)*/
 printf("The pointer ptr is pointing to the base address : %d\n", ptr);
 for(int i=0;i<n;i++)
 {
   printf("\nEnter the element: ");
   scanf("%d", &ptr[i]);
   /*We can access arrays in 4 possible ways, i.e
   ptr[i] = *(ptr+i) = *(i+ptr) = i[ptr]
   So, similarly, we can scan the elements in 4 ways, i.e
   &ptr[i] = (ptr+i) = (i+ptr) = &i[ptr]
     If ptr[i] = *(ptr+i) then
       &ptr[i] = (ptr+i) */
   printf("Address of %d: %u\n", ptr[i], &ptr[i]);
   sum = sum + ptr[i];
 }
 printf("\nSum = %d\n", sum);
 free(ptr);
 ptr=NULL;
/*If ptr=NULL is not used,then after using free(), the pointer will have the same
values as it was entered by the user.*/
 printf("After using free(), we find: \n");
 for(i=0;i<n;i++)
 {
    printf("\nptr[%d] = %d \t Address: %u\n", i,ptr[i],&ptr[i]);
 }
 /*In malloc, after the elements are freed, the pointer has
   either Garbage values or resets the values(i.e stores 0).
   This process of free() is compiler dependent. In Turbo C++
   after malloc(), if free() is used, only the first 2 values
   of ptr are set to 0, and rest all are garbage values. */
 getch();
}
OUTPUT
Enter the element: 2
Address of 2: 2044                                                              
                                                                                
Enter the element: 3                                                            
Address of 3: 2046                                                              
                                                                                
Enter the element: 4                                                            
Address of 4: 2048                                                              
                                                                                
Enter the element: 5                                                            
Address of 5: 2050                                                              
                                                                                
Sum = 15
After using free(), we find:                                                    
                                                                                
ptr[0] = 0       Address: 0                                                     
                                                                                
ptr[1] = 0       Address: 2                                                     
                                                                                
ptr[2] = 28482   Address: 4                                                     
                                                                                
ptr[3] = 27762   Address: 6                                                     
                                                                                
ptr[4] = 28257   Address: 8                                                     
                                                                                
