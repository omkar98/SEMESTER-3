#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 int rectangle[]={10,10,10,80,60,80,60,10,10,10};
 int triangle[]={115,10,90,80,140,80,115,10};
 int pentagon[]={170,35,193,10,222,35,209,80,183,80,170,35};
 int hexagon[]={23,110,48,110,60,135,48,160,23,160,10,135,23,110};
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 drawpoly(5,rectangle);
 drawpoly(4,triangle);
 drawpoly(6,pentagon);
 drawpoly(7,hexagon);

 outtextxy(5,85,"Rectangle");
 outtextxy(85,85,"Triangle");
 outtextxy(170,85,"Pentagon");
 outtextxy(10,165,"Hexagon");

 outtextxy(95,115,"Practical No: 8");
 outtextxy(95,130,"Omkar Deshpande");
 outtextxy(95,145,"SE-CSE-1");
 outtextxy(95,160,"Roll No: 25");
 getch();
 closegraph();
}