#include <stdio.h>
#include <conio.h>
void main ()
{
 int no;
clrscr();
label:
 printf("\n Enter positive no's only=");
 scanf("%d",&no);
  if(no<=0)
  {
   goto label;
  }
  printf("\n positive no is %d",no);
 getch();
 }