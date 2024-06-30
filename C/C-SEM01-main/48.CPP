# include <stdio.h>
# include <conio.h>
void main ()
{
 int i,no,ans;
 clrscr ();
 printf("\n enter no you want to multiplication table=");
 scanf("%d",&no);
   for (i=1;i<=10;i++)
   {
   ans=no*i;
    printf("\n %d * %d= %d",no,i,ans);
  }
   getch();
}