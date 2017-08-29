/*Write contents of one file into another file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 FILE *f3,*f4;
 char c;
 f3=fopen("omkar.txt", "r");
 /*Since the file is already present in the C Directory
 we used read mode.*/
 if(f3==NULL)
 {
   printf("ERROR! Cannot open file omkar.txt in read mode.\n");
   exit(0);
 }
 f4=fopen("omkar1.txt", "w");
 /*We need to write the data read into a new file named omkar1.txt
 Hence a new file named omkar1.txt is created into the C Directory
 where all the contents read are inserted.*/
 if(f4==NULL)
 {
   printf("ERROR! Cannot open file omkar1.txt in read mode.\n");
   exit(0);
 }
 c=fgetc(f3);
 /*Here, one by one char is read from omkar.txt and then one by one the char is put
 into the file omkar1.txt
 . */
 while(c!=EOF)
 {
   putc(c,f4);
   c=fgetc(f3);
 }
 fclose(f3);
 fclose(f4);
}

