#include <stdio.h>
#include <conio.h>
void main ()
{
int a,b;
clrscr ();
printf("\n Enter value of a,b=");
scanf("%d %d",&a,&b);
printf("\n a vlaue is %d and b value is %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n a vlaue is %d and b value is %d",a,b);
getch ();
}
