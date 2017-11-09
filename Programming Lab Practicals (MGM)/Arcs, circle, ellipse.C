#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT, gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 circle(100,100,10);
 circle(100,100,40);
 arc(150,100,330,30,50);
 arc(150,100,330,30,70);
 arc(150,100,330,30,90);
 arc(150,100,330,30,110);
 ellipse(100,60,0,360,20,40);
 ellipse(100,140,0,360,20,40);
 ellipse(100,100,270,90,80,40);
 fillellipse(300,100,20,15);
 outtextxy(10,10,"Practical No: 9 : Circle Graphics");
 outtextxy(100,200,"By Omkar Deshpande");
 getch();
 closegraph();
}
