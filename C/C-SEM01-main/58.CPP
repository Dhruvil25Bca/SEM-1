#include <stdio.h>
#include <conio.h>
void main ()
{
char ch;
clrscr ();
printf("\n Enter Character from A to D=");
scanf("%c",&ch);
switch (ch)
{
case 'A':printf("\n Ahmedabad");
       break;
case 'B':printf("\n Bombay");
       break;
case 'C':printf("\n Chennai");
       break;
case 'D':printf("\n Delhi");
       break;

   default:
   printf("\n Wrong character");
}
 getch();
}
