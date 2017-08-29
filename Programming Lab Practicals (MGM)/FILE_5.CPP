#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 FILE *f1, *f2;
 clrscr();
 int id;
 char name[50];
 float per;
 f1=fopen("students.txt", "a");
 if(f1==NULL)
 {
   printf("ERROR! Cannot open the file students.txt.");
   exit(0);
 }
 printf("Enter ID, Name and Percentage of the student: ");
 scanf("%d %s %f", &id, &name, &per);
 fprintf(f1,"ID: %d\nNAME: %s\nPERCENTAGE: %f", id, name, per);
 f2=fopen("stud_new.txt","w");
 if(f2==NULL)
 {
   printf("ERROR! Cannot open the file students.txt.");
   exit(0);
 }
 fscanf(f1, "%d %s %f", &id, &name, &per);
 printf("The following data has been written into the new file:\n ");
 printf("The student %s (ID: %d) has scored %0.3f percentage", name,id, per);
 fprintf(f2,"The student %s (ID: %d) has scored %0.3f percentage", name,id,per);
 fclose(f2);
 fclose(f1);
 getch();

}/*
OUTPUT
Enter ID, Name and Percentage of the student: 25 DESHPANDE 85.4
The following data has been written into the new file:
 The student DESHPANDE (ID: 25) has scored 85.400 percentage
   */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

