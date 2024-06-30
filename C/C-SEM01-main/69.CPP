#include <stdio.h>
#include <conio.h>
void main ()
{
 int no;
clrscr();
label:
 printf("\n Enter no=");
 scanf("%d",&no);
  if(no%2 == 0)
  {
   goto even;
  }
   else
  {
  goto odd;
  }
  even:
       printf("\n no is even %d",no);
  odd:
       printf("\n no is odd %d",no);

 getch();
 }