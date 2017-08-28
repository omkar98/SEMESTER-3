#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  FILE *f2;
  clrscr();
  char str[200];
  printf("This programs reads the contents of omkar.txt using fgets().\n");
  f2 = fopen("omkar.txt", "r");
  if(f2==NULL)
  {
    printf("ERROR! Cannot open the file.\n");
    exit(0);
  }
  else
  {

   while(fgets(str,200,f2)!=NULL)
   {
    printf("%s", str);
   }
   fclose(f2);
   getch();
  }
}
//OUTPUT
This programs reads the contents of omkar.txt using fgets().
Hi! My name is Omkar Deshpande. This program is used to read contents of a file.

                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

