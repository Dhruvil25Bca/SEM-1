#include <stdio.h>
#include <conio.h>
void main ()
{
int s[5],i,max=0;
clrscr();
   for(i=0;i<5;i++)
   {
    printf("\n Enter salary=");
    scanf("%d",&s[i]);
   }
    for(i=0;i<5;i++)
    {
	printf("\n salary is %d",s[i]);
	if(max<s[i])
	{
	max=s[i];
	}
    }
    printf("\n max salary is %d",max);
   getch();
}