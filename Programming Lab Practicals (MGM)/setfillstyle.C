#include<graphics.h>
#include<conio.h>
 
void main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   setfillstyle(SOLID_FILL,YELLOW);
   bar(10,10,30,30);

   setfillstyle(LINE_FILL, YELLOW);
   bar(40,10,60,30);

   setfillstyle(LTSLASH_FILL, YELLOW);
   bar(70,10,90,30);

   setfillstyle(SLASH_FILL,YELLOW);
   bar(100,10,120,30);

   setfillstyle(BKSLASH_FILL,YELLOW);
   bar(130,10,150,30);

   setfillstyle(LTBKSLASH_FILL, YELLOW);
   bar(160,10,180,30);

   setfillstyle(HATCH_FILL,YELLOW);
   bar(10,40,30,60);

   setfillstyle(XHATCH_FILL,YELLOW);
   bar(40,40,60,60);

   setfillstyle(INTERLEAVE_FILL, YELLOW);
   bar(70,40,90,60);

   setfillstyle(WIDE_DOT_FILL,YELLOW);
   bar(100,40,120,60);

   setfillstyle(CLOSE_DOT_FILL,YELLOW);
   bar(130,40,150,60);

   outtextxy(10,70,"Practical No: 10(b)");
   outtextxy(10,85,"By Omkar Deshpande");

   getch();
   closegraph();
   return 0;
}