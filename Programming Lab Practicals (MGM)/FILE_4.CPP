#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  FILE *f1, *f2;
  char str[100];
  f1=fopen("omkar.txt", "r");
  if(f1==NULL)
  {
    /*The file ptr returns NULL if the file cannot be opened*/
    printf("ERROR! The file omkar.txt cannot be opened.\n");
  }
  fgets(str,100,f1);
/*It gets the entire string at once (along with the null char \o) and
stores it in str. This function returns the same str.*/
  fclose(f1);
  f2=fopen("omkar2.txt", "w");
  if(f2==NULL)
  {
    /*The file ptr returns NULL if the file cannot be opened*/
    printf("ERROR! The file omkar.txt cannot be opened.\n");
  }
  fputs(str,f2);
/*This function writes the str into the file pointed by f2*/
  fclose(f2);
}