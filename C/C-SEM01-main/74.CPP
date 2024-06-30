#include <stdio.h>
#include <conio.h>
void main ()
{
int s[5];
clrscr();
printf("\n Enter salary of five employes=");
scanf("%d %d %d %d %d",&s[0],&s[1],&s[2],&s[3],&s[4]);
printf("%d %d %d %d %d",s[0],s[1],s[2],s[3],s[4]);
getch();
}