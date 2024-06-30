#include <stdio.h>
#include <conio.h>
void main ()
{
int p[5],i;
clrscr();
   for(i=0;i<5;i++)
   {
    printf("\n Enter price of books %d=",i);
    scanf("%d",&p[i]);
   }
    for(i=0;i<5;i++)
    {
	printf("\n book %d price is %d",p[i]);
    }
   getch();
}