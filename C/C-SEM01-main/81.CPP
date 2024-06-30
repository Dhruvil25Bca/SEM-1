#include <stdio.h>
#include <conio.h>
void main ()
{
int m[5],i,min=0;
clrscr();
   for(i=0;i<5;i++)
   {
    printf("\n Enter marks=");
    scanf("%d",&m[i]);
   }
    for(i=0;i<5;i++)
    {
	printf("\n marks is %d",m[i]);
	if(min>m[i])
	{
	min=m[i];
	}
    }
    printf("\n min marks is %d",min);
   getch();
}