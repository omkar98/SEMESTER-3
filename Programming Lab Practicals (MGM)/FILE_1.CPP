#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  FILE *f1;
  char c;
  clrscr();
  printf("This program reads data from omkar.txt file.\n");
  f1 = fopen("omkar.txt", "r");
  if(f1==NULL)
  {
    printf("ERROR! Could not open the file.\n");
    exit(0);
  }
  else
  {
    c=fgetc(f1);
/*It is used to read a character from a file.
It reads only 1 character at a time and moves the file pointer to the next
address/location. So, when fgetc() is called again it reads the next
character.*/
    while(c!=EOF)
    /*It keeps reading the file until the file pointer reaches
     the last character. Such a condition is specified here as EOF.*/
    {
      printf("%c", c);
      c=fgetc(f1);
    }
    printf("\nThank You!\n");
    fclose(f1);
    getch();
  }
}
OUTPUT
This program reads data from omkar.txt file.
Hi! My name is Omkar Deshpande. This program is used to read contents of a file.
                                                                                
Thank You!                                                                      



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


