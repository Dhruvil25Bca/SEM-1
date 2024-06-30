# include <stdio.h>
# include <conio.h>
void main ()
{
 int l,a,ans1,ans2,ans3,ans4;
 clrscr ();
 printf("\n Enter value of l,a=");
 scanf("%d %d",&l,&a);
    ans1=l*l;
    printf("\n area of squqre is %d",ans1);
    ans2=l*a;
    printf("\n area of rectangle is %d",ans2);
    ans3=4*a;
    printf("\n perimeter of squqre is %d",ans3);
    ans4=2*l*a;
    printf("\n perimeter of rectangle is %d",ans4);

   getch();
}