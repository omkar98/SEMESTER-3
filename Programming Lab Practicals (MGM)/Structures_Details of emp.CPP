AIM:TO FIND DETAILS OF EMPLOYEE USING STRUCTURE  CALL BY REFRENCE.
#include<stdio.h>
#include<conio.h>
void main()
{
int i;	
clrscr();

struct emp
{
char name[10];
int id;
int sal;
}e[3];
struct emp *ptr;
printf("enter employee name,id,salary details:");
for(i=0;i<=2;i++)
{
scanf("%s%d%d",&e[i].name,&e[i].id,&e[i].sal);
}
ptr=&e[0];
for(i=0;i<=2;i++)
{
printf ("\n%s\t%d\t%d",ptr->name,ptr->id,ptr->sal);
ptr++;
}
getch();
}
======================output============
enter employee name,id,salary details:
lio 23 5456                                                                     
vilas 23 5666                                                                   
akshay 3 5567

lio     23      5456
vilas   23      5666
akshay  3       5567
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
NAME :GOVINDA KANKAL. ROLL NO .:41  CLASS :SE CSE 1

