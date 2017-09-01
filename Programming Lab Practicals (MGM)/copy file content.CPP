#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  FILE *f1, *f2;
  clrscr();
  char c;
  f1=fopen("data.txt","r");
  f2=fopen("data_1.txt", "w");
  if(f1==NULL || f2==NULL)
  {
    printf("ERROR! The file cannot be opened.");
  }
  c=fgetc(f1);
  while(c!=EOF)
  {
    fputc(c,f2);
    c=fgetc(f1);
  }
  printf("The a new file data_1.txt has been successfully generated and has contents of data.txt");
 fclose(f1);
 fclose(f2);
 getch();
}
OUTPUT
The a new file data_1.txt has been successfully generated and has contents of da
data.txt
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
