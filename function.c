#include<stdio.h>
#include<conio.h>
void main()
{
 int sum(int,int); //declared
 int a,b,c;
 clrscr();
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter another number:");
 scanf("%d",&b);
 c= sum(a,b);
 printf("sum is %d",c);
 getch();
}
 int sum(int a,int b)
{
 int c;
 c=a+b;
 return c;
}
