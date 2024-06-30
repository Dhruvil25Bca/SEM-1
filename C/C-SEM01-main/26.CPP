//Read number of week day and print its related name//
# include <stdio.h>
# include <conio.h>
void main ()
{
 int no;
   clrscr ();
 printf("\n Enter no between 0 to 6=");
 scanf("%d", &no);
 if(no == 0)
 {
 printf("\n sunday");
 }
 else if(no == 1)
 {
 printf("\n monday");
 }
 else if(no == 2)
 {
 printf("\n tuesday");
 }
 else if(no == 3)
 {
 printf("\n wednesday");
 }
 else if (no == 4)
 {
 printf("\n thursday");
 }
 else if (no == 5)
 {
 printf("\n friday");
 }
 else if (no == 6)
 {
 printf("\n saturday");
 }
 else
 {
 printf("\n wrong number entered");
 }
 getch();
 }

