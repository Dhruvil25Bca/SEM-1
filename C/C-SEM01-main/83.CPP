#include <stdio.h>
#include <conio.h>
void main ()
{
  int m[3][3],i,j;
  clrscr();
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     printf("\n Enter student%d marks=",i);
     scanf("%d",&m[i][j]);
     }
   }
      for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     printf("%d",m[i][j]);
   }
   printf("\n");
  }
  getch();
}