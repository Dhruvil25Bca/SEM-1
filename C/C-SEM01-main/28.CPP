//Read a no from user and if no is 100 print massage correct no is entered//
#include <stdio.h>
#include <conio.h>
void main()
{
 int no;
 clrscr();

 printf("\n Enter no");
 scanf("%d",&no);

 if(no == 100)
 {
 printf("\n correct no");
 }
 getch();
 }