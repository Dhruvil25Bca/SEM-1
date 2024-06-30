#include <stdio.h>
#include <conio.h>
void main ()
{
int no;
clrscr ();
printf("\n Enter value of no=");
scanf("%d",&no);
if (no>=0)
{
 if (no>0)
 {
 printf("\n no is positive");
 }
 else
 {
 printf("\n no is zero");
 }
}
else
{
printf("\n no is negative");
}
getch ();
}