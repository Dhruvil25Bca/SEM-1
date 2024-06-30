#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j,ans;
clrscr ();
for (i=1;i<=10;i++)
{
 for (j=1;j<=10;j++)
 {
    ans=i*j;
    printf("\n %d * %d = %d",i,j,ans);
  }
    printf("\t");
 }
 getch ();
 }