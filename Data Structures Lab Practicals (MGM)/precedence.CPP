#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char stack[10];
char p[10]={'(',')','^','%','/','*','+','-'};
clrscr();
printf("enters the operator");
for( i=0;i<=8;i++)
{
scanf("%c",&stack[i]);
}
for(i=0;i<=8;i++)
{
for(j=0;j<=8;j++)
{
if(p[i]==stack[j])
{
printf("%c\t",stack[j]);
}
}
}
getch();
}
=================output========
enters the operator+-)(*^%/
(	)	 ^	%	/	 *	+	-                                                                               
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
