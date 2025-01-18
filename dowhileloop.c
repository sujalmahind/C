#include<stdio.h>
#include<conio.h>
void main()
{
 double number,sum=0;
 clrscr();
 do
 {
 printf("enter a number");
 scanf("%lf",&number);
 sum+=number;
 }
 while(number!=0);
 printf("sum=%lf",sum);
 getch();
}
