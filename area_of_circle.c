#include<conio.h>
#include<stdio.h>
#define pi 3.14
void main()
{
 float radius,result;
 clrscr();
 printf("enter the radius to find area of circle")
 scanf("%f",&radius);
 result=pi*radius*radius;
 printf("area of circle is : %f",result);
 getch();
}
