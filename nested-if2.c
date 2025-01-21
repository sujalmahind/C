#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2;
 clrscr();
 printf("get value for number1:");
 scanf("%d",num1);
 printf("get value of number2:");
 scanf("%d",num2);
 if(num1!=num2)
 {
 printf("number1 is not equale to number2")
 if(num1>num2)
 {
 printf("number1 is larger than number2");
 }
 else
 {
 printf("number2 is larger than number1");
 }
 }
 else
 {
 printf("number1 is equal to number2");
 }
 getch();
}

