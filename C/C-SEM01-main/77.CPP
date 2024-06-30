#include <stdio.h>
#include <conio.h>
void main ()
{
int a[5],i,sum=0;
clrscr();
   for(i=0;i<5;i++)
   {
    printf("\n Enter Element %d=",i);
    scanf("%d",&a[i]);
    sum=sum+a[i];
   }
    for(i=0;i<5;i++)
    {
	printf("\n Element %d index is %d",a[i]);
    }
    printf("\n sum of all elements is %d",sum);
   getch();
}