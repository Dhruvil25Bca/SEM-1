#include <stdio.h>
#include <conio.h>
void main ()
{
int m[5];
clrscr();
printf("\n Enter marks of five students=");
scanf("%d %d %d %d %d",&m[0],&m[1],&m[2],&m[3],&m[4]);
printf("%d %d %d %d %d",m[0],m[1],m[2],m[3],m[4]);
getch();
}