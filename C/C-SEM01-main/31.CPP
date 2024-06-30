#include<stdio.h>
#include<conio.h>
void main ()
{
 int max,a,b,c;
clrscr();
  printf("\n Enter value of a,b,c=");
  scanf("%d %d %d",&a,&b,&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
 printf("\n max value is %d",max);
getch ();
}