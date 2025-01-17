#include<conio.h>
#include<stdio.h>
void main()
{
 float length,breadth,result;
 clrscr();
 printf("enter the value to finf area of rectangle");
 printf("enter the value of length:");
 scanf("%f",&length);
 printf("enter the value of breadth:");
 scanf("%f",&breadth);
 result=length*breadth;
 printf("area of rectangle is : %f",result);
 getch();
}
