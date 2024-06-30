#include <stdio.h>
#include <conio.h>
void main ()
{
int no;
clrscr ();
printf("\n Enter value between 1 to 5=");
scanf("%d",&no);
switch (no)
{
case 1:printf("\n one");
       break;
case 2:printf("\n two");
       break;
case 3:printf("\n three");
       break;
case 4:printf("\n four");
       break;
case 5:printf("\n five");
       break;

   default:
   printf("\n Incorrect no ");
}
 getch();
}
