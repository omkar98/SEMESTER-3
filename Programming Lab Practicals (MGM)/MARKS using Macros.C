#include<stdio.h>
#include<conio.h>
#define MARKS 77
void main()
{
clrscr();
#if MARKS>75
  printf("\nDistinction.");
#elif MARKS>60
  printf("\nFIRST CLASS");
#elif MARKS>50
  printf("\nSECOND CLASS");
#else
  printf("\n FAIL");

#endif
getch();
}

/*=======OUTPUT=======*/
Distinction