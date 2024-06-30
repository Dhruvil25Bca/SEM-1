#include <stdio.h>
#include <conio.h>
void main ()
{
int P,R,N;
clrscr();
float SI;
printf("\n Enter value of P,R,N=");
scanf("%d %d %d",&P,&R,&N);
SI=(P*R*N)/100;
printf("\n simple interest is %f",SI);
getch();
}