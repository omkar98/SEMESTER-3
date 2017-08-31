#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  FILE *f1,*f2;
  clrscr();
  int num;
  f1=fopen("num.txt","w");
  if(f1==NULL)
  {
    printf("ERROR! The file cannot be opened!\n");
    exit(0);
  }
  printf("Enter 10 numbers into the file num.txt: \n");
  int n=0;
  while(n<10)
  {
  scanf("%d", &num);
  putw(num,f1);
  n++;
  }
  fclose(f1);
  f1=fopen("num.txt","r");
  f2=fopen("sum.txt", "w");
  if(f1==NULL || f2==NULL)
  {
    printf("ERROR! The file cannot be opened!\n");
    exit(0);
  }
  num=getw(f1);
  int sum=0;
    while(num!=EOF)
    {
      sum=sum+num;
      num=getw(f1);
    }
    printf("Sum=%d", sum);
    fclose(f1);
    fclose(f2);
    getch();
}
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
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
