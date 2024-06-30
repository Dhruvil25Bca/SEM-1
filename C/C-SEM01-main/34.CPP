#include <stdio.h>
#include <conio.h>
void main ()
{
float f;
clrscr();
printf("\n Enter temprature in farenhit=");
scanf("%f",&f);
printf("\n Converted to cecius is %f",(f-32)*5/9);
getch();
}