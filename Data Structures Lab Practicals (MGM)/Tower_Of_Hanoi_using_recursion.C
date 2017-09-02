/*Tower of Hanoi using recursion*/

#include<stdio.h>
#include<conio.h>

int i=0;/*To set a counter, that counts the number of moves taken*/

void TOH(int n, char beg, char end, char aux)
{
  if(n==1)
  {
    printf("Move No: %d  | Moved the disc 1 from %c to %c\n",++i,beg, end);
  }
  else
  {
    TOH(n-1,beg,aux,end);
    printf("Move No: %d  | Moved the disc %d from %c to %c\n",++i,n,beg,end);
    TOH(n-1,aux,end,beg);
  }
}

void main()
{
  int n;
  char beg='A',end='C',aux='B';
  clrscr();
  printf("Enter no. of Discs: ");
  scanf("%d", &n);
  TOH(n,beg,end,aux);
  getch();
}
/*OUTPUT
Enter no. of Discs: 3
Move No: 1  | Moved the disc 1 from A to C                                      
Move No: 2  | Moved the disc 2 from A to B                                      
Move No: 3  | Moved the disc 1 from C to B                                      
Move No: 4  | Moved the disc 3 from A to C                                      
Move No: 5  | Moved the disc 1 from B to A                                      
Move No: 6  | Moved the disc 2 from B to C                                      
Move No: 7  | Moved the disc 1 from A to C

Enter no. of Discs: 4
Move No: 1  | Moved the disc 1 from A to B                                      
Move No: 2  | Moved the disc 2 from A to C                                      
Move No: 3  | Moved the disc 1 from B to C                                      
Move No: 4  | Moved the disc 3 from A to B                                      
Move No: 5  | Moved the disc 1 from C to A                                      
Move No: 6  | Moved the disc 2 from C to B                                      
Move No: 7  | Moved the disc 1 from A to B                                      
Move No: 8  | Moved the disc 4 from A to C                                      
Move No: 9  | Moved the disc 1 from B to C                                      
Move No: 10  | Moved the disc 2 from B to A                                     
Move No: 11  | Moved the disc 1 from C to A                                     
Move No: 12  | Moved the disc 3 from B to C                                     
Move No: 13  | Moved the disc 1 from A to B
Move No: 14  | Moved the disc 2 from A to C
Move No: 15  | Moved the disc 1 from B to C
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

