/*Structure Book Program - passing structure to functions using pointers.*/
/*A program that includes:
Structures
Functions
pointers
*/
#include<stdio.h>
#include<conio.h>
struct book
{
char name[10];
int price;
char author[10];
}b;
void main()
{
void display(struct book *b);
clrscr();
printf("enter book name,price,author details:");
scanf("\n%s%d%s",&b.name,&b.price,&b.author);
 display(&b);
getch();
}
void display(struct book *b1)
{
printf("\n%s\t%d\t%s",b1->name,b1->price,b1->author);
}
====================output====================
enter book name,price,author details:
hello 999 rishi                                                                 
                                                                                
hello   999     rishi                                                           
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
