#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,num3;
 clrcr();
 printf("enter three numbers:");
 scanf("%d%d%d",&num1,&num2,&num3);
 if(num1>num2)
 {
 if(num1>num3)
 {
 printf("%d isthe largest number",num1);
 }
 else
 {
 printf("%d is the largest number",num3);
 }
 }
 else
 {
 if(num2>num3)
 {
 printf("%d is the largest number",num2);
 }
 else
 {
 printf("%d is the largest number",num3);
 }
 }
 getch();
}
