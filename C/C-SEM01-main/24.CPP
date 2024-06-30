# include <stdio.h>
# include <conio.h>
void main ()
{
 int no1,no2,no3;
 clrscr();
 printf("\n enter value of no1 and no2 and no3=");
 scanf("%d %d %d",&no1,&no2,&no3);

  if (no1>=no2)
 {
     if (no1>=no3)
  {
  printf("\n no1 is max");
  }
 else
  {
  printf("\n no3 is max");
  }
 }
 else
 {
 if (no2>=no3)
  {
 printf("\n no2 is max");
  }
 else
  {
 printf("\n no3 is max");
  }
 }
 getch();
 }
