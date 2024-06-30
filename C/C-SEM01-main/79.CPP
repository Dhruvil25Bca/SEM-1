#include <stdio.h>
#include <conio.h>
void main ()
{
int m[5],i,max=0;
clrscr();
   for(i=0;i<5;i++)
   {
    printf("\n Enter marks=");
    scanf("%d",&m[i]);
   }
    for(i=0;i<5;i++)
    {
	printf("\n marks is %d",m[i]);
	if(max<m[i])
	{
	max=m[i];
	}
    }
    printf("\n max marks is %d",max);
   getch();
}