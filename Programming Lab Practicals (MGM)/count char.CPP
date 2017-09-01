/*Write a program to read the number of characters in a string.*/
#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *f1;
 clrscr();
 int count=0;
 char c;
 /*We need to create a file in the directory
 inorder to use the 'read' mode of FILE.
 Hence, we create a file named data.txt
 and store 'Omkar Deshpande' in it*/
 f1=fopen("data.txt", "r");
 if(f1==NULL)
 {
   printf("ERROR! The file cannot be opened.\n") ;
 }
 /*fgetc() gets the first character in the file
 and sets the pointer to the next character*/
 c=fgetc(f1);
 /*The while loop continues until the last character*/
 while(c!=EOF)
 {
  count++;
  /*As soon as the count is incremented, we obtain the next
  character using fgetc().*/
  c=fgetc(f1);
 }
 printf("The number of characters in the file data.txt is: %d", count) ;
 getch();
}
OUTPUT
The number of characters in the file data.txt is: 15





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
