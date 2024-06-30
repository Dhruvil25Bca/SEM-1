//maximum number from two numbers//
#include <stdio.h>
#include <conio.h>
void main ()
{
int max,a,b;
clrscr ();
printf("\n Enter value of a,b=");
scanf("%d %d",&a,&b);
     max=(a>b)?a:b;
printf("\n max value is %d",max);
getch ();
}