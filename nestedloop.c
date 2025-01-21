#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=2;i<25;i++)
 {
 for(j=2;j<(i/j);j++)
 if(!(i/j))
 break;
 if(j>(i/j))
 printf("%d is prime\n",i);
 }
 getch();
}
