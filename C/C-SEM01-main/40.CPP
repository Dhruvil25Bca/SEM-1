# include <stdio.h>
# include <conio.h>
void main ()
{
 int i=1,no,ans;
 clrscr ();
 printf("\n Enter no you want to multiplication table=");
 scanf("%d",&no);
   while (i<=10)
   {
   ans=no*i;
   printf("\n%d * %d=%d",no,i,ans);
   i++;
   }
 getch();
}