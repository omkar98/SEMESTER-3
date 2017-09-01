/*This program prints the sum correct when run, but 
displays the integers and sum as characters in the file num.txt 
and sum.txt respectively.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  FILE *f1,*f2;
  clrscr();
  int num=0;
  /*The num.txt file is automatically generated.We use write
  mode to write integers into the file pointed by f1*/
  f1=fopen("num.txt","w");
  if(f1==NULL)
  {
    printf("ERROR! The file cannot be opened!\n");
    exit(0);
  }
  printf("Enter 10 numbers into the file num.txt: \n");
  /*We use while loop to write integers into the file.
  We first set n=0 and use 'n' as a counter*/
  int n=0;
  while(n<3)
  {
  scanf("%d", &num);
  /*As soon as the num is read from the user
  we write it into the file pointed by f1.*/
  putw(num,f1);
  fprintf(f1,"\n");
  n++;
  }
  rewind(f1);
  f1=fopen("num.txt","r");
  f2=fopen("sum.txt", "w");
  if(f1==NULL || f2==NULL)
  {
    printf("ERROR! The file cannot be opened!\n");
    exit(0);
  }
  /*The getw() gets the first int and then sets the pointer to
  point the next integer.*/
  num=getw(f1);
  int sum=0;
  n=0    ;
  fprintf(f2,"Following are the numbers: ");
    while(n<3)
    {
      sum=sum+num;
      /*The getw() keeps reading the next integers and assigns it into
      num variable.*/
      num=getw(f1);
      n++;
    }
     fprintf(f2,"\nThe sum: %d", sum);
    fclose(f1);
    fclose(f2);
    getch();
}
/*
OUTPUT
Enter 10 numbers into the file num.txt:
1
2
3
4
5
6
7
8
9
10
Sum=55
*/  