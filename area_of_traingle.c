#include<conio.h>
#include<stdio.h>
#define a 0.5
void main()
{
 float base,height,result;
 clrscr();
 printf("\nEnter value to find the area of triangle :");
 printf("\nEnter base value :");
 printf("\nEnter height value :");
 scanf("%f%f",&base,&height);
 result=a*base*height;
 printf("area of triangle:%f",result);
 getch();
}
