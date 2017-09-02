/*callby value-Structures and functions*/
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
void display(struct book b) ;
clrscr();
printf("enter book name,price,author details:");
scanf("\n%s%d%s",&b.name,&b.price,&b.author);
 display(b);
getch();
}
void display(struct book b1)
{
printf("\n%s\t%d\t%s",b1.name,b1.price,b1.author);
}
===================output==================
enter book name,price,author details:
happy 1000 bakshi                                                               
                                                                                
happy   1000    bakshi                                                          
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
