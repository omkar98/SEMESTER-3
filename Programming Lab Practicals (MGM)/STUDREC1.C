/*If you want to use float values in structure, we need 
to add a function that forcefully makes the floating int work.*/

AIM: A program that implements the following function:
•	Get students data from the user.
•	Write this data in a file named student.txt.
•	Read the data from the student.txt file and display it on the output screen.
•	Also store the data from student.txt into another file named stud_new.txt with a different format.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static void force_fpf() /* A dummy function */
{
    float x, *y; /* Just declares two variables */
    y = &x;      /* Forces linkage of FP formats */
    x = *y;      /* Suppress warning message about x */
}


void main()
{
 FILE *f1, *f2;
 int i,num;
 struct stud
 {
   int id;
   char name[50];
   float per;
 } s[10];
 clrscr();
 f1=fopen("stud1.txt", "a");
 if(f1==NULL)
 {
   printf("ERROR! Cannot open the file students.txt.");
   exit(0);
 }
 printf("Enter number of students: ") ;
 scanf("%d", &num);
 for(i=0;i<num;i++)
 {
   printf("Enter ID, Name and Percentage of the student: ");
   scanf("%d %s %f", &s[i].id, &s[i].name, &s[i].per);
 }
 for(i=0;i<num;i++)
 {
   fprintf(f1,"ID: %d\nNAME: %s\nPERCENTAGE: %f\n", s[i].id, s[i].name, s[i].per);
 }
f2=fopen("stud_new1.txt","w");
if(f2==NULL)
 {
   printf("ERROR! Cannot open the file students.txt.");
   exit(0);
 }
 printf("The following data has been written into the new file:\n ");
 printf("Sr.No\tID\tNAME\tPercentage\n");
 fprintf(f2,"Sr.No\tID\tNAME\tPercentage\n");
 for(i=0;i<num;i++)
 {
   fscanf(f1, "%d %s %f", &s[i].id, &s[i].name, &s[i].per);
   printf("%d\t%d\t%s\t%f\n",i+1,s[i].id,s[i].name,s[i].per);
   fprintf(f2,"%d\t%d\t%s\t%f\n",i+1,s[i].id,s[i].name,s[i].per);
 }
 fclose(f2);
 fclose(f1);
 getch();
}
/*
OUTPUT
Enter number of students: 5
Enter ID, Name and Percentage of the student: 25 Omkar 80                       
Enter ID, Name and Percentage of the student: 26 Ravi 85                        
Enter ID, Name and Percentage of the student: 27 Pradeep 90                     
Enter ID, Name and Percentage of the student: 28 Govind 95                      
Enter ID, Name and Percentage of the student: 29 Anuj 98                        
The following data has been written into the new file:                          
 Sr.No  ID      NAME    Percentage                                              
1       25      Omkar   80                                                      
2       26      Ravi    85                                                      
3       27      Pradeep 90                                                      
4       28      Govind  95                                                      
5       29      Anuj    98  */
                                                                                
                                                                                
                                                                                
                           