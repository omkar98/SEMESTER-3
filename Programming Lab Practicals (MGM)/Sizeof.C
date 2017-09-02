/*Size of function*/
#include<stdio.h>
#include<conio.h>

void main()
{
  int n=5, *ptr;
  ptr = &n;

  clrscr();
  printf("\nValue of variable 'n' = %0.3f", (float)n);
  printf("\nSize of variable = %u", sizeof(n));
  printf("\nValue of pointer=%0.3f", (float) *ptr);
  printf("\nSize of pointer=%u", sizeof(*ptr));
  printf("\nSize of datatype float=%u", sizeof(float));
getch();

}
//======OUTPUT=======

Value of variable 'n' = 5.000                                                   
Size of variable = 2                                                            
Value of pointer=5.000                                                          
Size of pointer=2                                                               
Size of datatype float=4                                                        

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
