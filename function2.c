#include<stdio.h>
#include<conio.h>
void main()
{
 int sub(int,int); //declared
 int a,b,c;
 clrscr();
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter another number:");
 scanf("%d",&b);
 c= sub(a,b);
 printf("substraction is %d",c);
 getch();
}
 int sub(int a,int b)
{
 int c;
 c=a-b;
 return c;
}
