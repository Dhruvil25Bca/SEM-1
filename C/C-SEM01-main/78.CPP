#include <stdio.h>
#include <conio.h>
void main ()
{
int p[5],i,sum=0;
clrscr();
   for(i=0;i<5;i++)
   {
    printf("\n Enter price of books %d=",i);
    scanf("%d",&p[i]);
    sum=sum+p[i];
   }
    for(i=0;i<5;i++)
    {
	printf("\n book %d price is %d",p[i]);
    }
    printf("\n five books total price is %d",sum);
   getch();
}