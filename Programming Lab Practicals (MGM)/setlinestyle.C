#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
   int gd=DETECT,gm;
   initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
   outtextxy(125,30,"Practical No: 10");

   setlinestyle(0,0,2);/*Solid Line*/
   line(100,50,300,50);

   setlinestyle(1,0,2);/*Dotted Line*/
   line(100,75,300,75);

   setlinestyle(2,0,2);/*Center Line*/
   line(100,100,300,100);

   setlinestyle(3,0,2);/*Dashed Line*/
   line(100,125,300,125);

   setlinestyle(4,2,1);/*Userbit Line*/
   line(100,150,300,150);

   outtextxy(100,170,"By Omkar Deshpande");

   getch();
   closegraph();
   return 0;
}
/*OUTPUT*/