
AIM: To find the sum of Fibonacci series using recursion function.

PROGRAM:

#include<stdio.h>
#include<conio.h>
/*Function Prototype*/
int  rec(int,int,int);

/*Since, sum variable is used by other function, hence we declare it globally.*/
int sum=0; 

/*----Main Function----*/
void main()
{
	int n,m,k ;
	clrscr();
	printf("Enter the number: ");
	scanf("%d",&k);
	printf("\nSum: ");
	m=0;
	n=1;
	rec(m,n,k);
	getch();
}







/*RECURSION FUNCTION*/
int rec(int f1,int f2,int n)
{
	sum=f1+f2;
  	if(sum<n)
   	{
     		printf(" %d ", sum);
    		rec(f2,sum,n);
   	}
}


OUTPUT

Enter the number: 10
Sum:  1  2  3  5  8












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

OMKAR DESHPANDE | ROLL NO: 25 | SE-CSE-1 | DS

