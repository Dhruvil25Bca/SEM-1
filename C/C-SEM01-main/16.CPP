#include <stdio.h>
#include <conio.h>
void main ()
{
int a,b,t;
clrscr ();
printf("\n Enter value of a,b=");
scanf("%d %d",&a,&b);
printf("\n a vlaue is %d and b value is %d",a,b);
t=a;
a=b;
b=t;
printf("\n a vlaue is %d and b value is %d",a,b);
getch ();
}