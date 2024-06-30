#include <stdio.h>
#include <conio.h>
void main ()
{
int m[100],i;
clrscr();
   for(i=0;i<100;i++)
   {
    printf("\n Enter marks=");
    scanf("%d",&m[i]);
   }
    for(i=0;i<100;i++)
    {
	printf("%d",m[i]);
    }
   getch();
}