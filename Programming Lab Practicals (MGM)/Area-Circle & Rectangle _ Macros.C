/*Calculating Area of Rectangle and Circle using macros*/
#include<stdio.h>
#include<conio.h>
#define length 5
#define area(r) (3.14*r*r)

void main()
{
  int bre, area_rec,r;
  float a;
  clrscr();

  printf("\nEnter the bredth of the rectangle: ");
  scanf("%d", &bre);
  area_rec=bre*length;
  printf("\nArea of the rectangle: %d", area_rec);
  printf("\nEnter the radius of the circle: ");
  scanf("%d", &r);
  a=area(r);
  printf("\nArea of Circle: %0.3f", a);
  getch();
}
=====OUTPUT=====

Enter the bredth of the rectangle: 5

Area of the rectangle: 25
Enter the radius of the circle: 2

Area of Circle: 12.560

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

