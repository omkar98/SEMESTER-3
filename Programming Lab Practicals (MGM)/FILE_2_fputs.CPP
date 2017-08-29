#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  FILE *f2;
  clrscr();
  char str[200];
  /*The character array must have one extra character reserved for
  the 'end of string, \o'. Hence the size must be equal to the size
  of input plus one.*/
  printf("This programs reads the contents of omkar.txt using fgets().\n");
  f2 = fopen("omkar.txt", "r");
  if(f2==NULL)
  {
    printf("ERROR! Cannot open the file.\n");
    exit(0);
  }
  else
  {
   fgets(str,200,f2);
   /*This function reads the first 200 char from a file pointed by f2,
   and stores it in the str array. After the process is done it returns
   the same str parameter.*/
   {
    printf("%s", str);
   }
   fclose(f2);
   getch();
  }
}
/*OUTPUT
This programs reads the contents of omkar.txt using fgets().
Hi! My name is Omkar Deshpande. This program is used to read contents of a file.
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

