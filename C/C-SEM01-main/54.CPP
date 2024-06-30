# include <stdio.h>
# include <conio.h>
void main ()
{
 int i=1,no,ans;
 clrscr ();
 printf("\n Enter no you want to multiplication table=");
 scanf("%d",&no);
   do
   {
   ans=no*i;
   printf("\n%d * %d=%d",no,i,ans);
   i++;
   }while (i<=10);
 getch();
}