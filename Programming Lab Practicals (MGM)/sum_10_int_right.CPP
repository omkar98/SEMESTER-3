/*AIM: To write a program that takes 10 input integers
from user and writes it in a file named num.txt. Later,
reads the 10 integers from num.txt and prints the sum
in another file named sum.txt*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>  /*for exit()*/

void main()
{
  FILE *f1,*f2;
  clrscr();
  int num;
/*Since, we want the 10 integers written into num.txt,
we choose write mode.*/
  f1=fopen("num.txt","w");
  if(f1==NULL)
  {
    printf("ERROR! The file cannot be opened!\n");
    exit(0);
  }
  printf("Enter 10 numbers into the file num.txt: \n");
  int n=0;  /*We set the counter(n) to 0 to read 10 integers*/
  while(n<10)
  {
    scanf("%d", &num);
/*Each time an integer is read from user, the fprintf prints 
the integer into the file pointed by *f1.*/
    fprintf(f1,"%d\n",num);
    n++;
  }
  fclose(f1);
/*We close the read mode of the file and again open it 
in its write mode. (OPTIONAL STEP)*/
  f1=fopen("num.txt","r");
  f2=fopen("sum.txt", "w");
  if(f1==NULL || f2==NULL)
  {
    printf("ERROR! The file cannot be opened!\n");
    exit(0);
  }
  int sum=0;
  n=0; 
/*We again set the counter(n) to 0 to read 
10 integers and add each of them.*/
    while(n<10)
    {
/*The fscanf() reads each integer and then sets the pointer 
to point the next integer. */
      fscanf(f1,"%d", &num);
      sum=sum+num;
      n++;
    }
/*Finally the sum is printed in the sum.txt file and we 
close all the opened files.*/
    fprintf(f2,"Sum=%d", sum);
    fclose(f1);
    fclose(f2);
    getch();
}