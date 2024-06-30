#include <stdio.h>
#include <conio.h>
void main ()
{
int no,i=1;
clrscr ();
 printf("999 will stop furthar task");
 while (i<=100)
 {
 printf("\n Enter no=");
 scanf("%d",&no);

  if(no == 999)
  {
   break;
  }
  printf("\n Entered no is %d",no);
  i++;
 }
  getch ();
 }