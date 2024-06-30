#include <stdio.h>
#include <conio.h>
void main ()
{
int no;
clrscr ();
printf("\n Enter no between 1to3=");
scanf("%d",&no);

 if (no == 1)
 {
   printf("\n One");
 }
 else if (no == 2)
 {
 printf("\n Two");
 }
 else if(no == 3)
 {
 printf("\n Three");
 }
 else
 {
 printf("\n Wrong number entered");
 }
 getch();
 }