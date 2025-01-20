#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2;
 clrscr();
 printf("enter a number:");
 scanf("%d",&num1);
 printf("enter another number:");
 scanf("%d",&num2);
 if (num1>num2){
 printf("%d is the largest number",num1);
 }
 else{
 printf("%d is the largest number",num2);
 }
 getch();
}
