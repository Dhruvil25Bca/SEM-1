#include <stdio.h>
#include <conio.h>
void main ()
{
int i;
clrscr ();
  for (i=1;i<=100;i++)
{
 if (i%2 !=0)
 {
 continue;
}
 printf("\t %d",i);
 i++;
 }
 getch();
}