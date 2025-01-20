#include<stdio.h>
#include<conio.h>
void main()
{
 int input,a,b;
 clrscr();
 printf("1-add\n2-sub\n3-multiplication\n4-division\n");
 printf("\nchoose one option:");
 scanf("%d",&input);
 if (input==1){
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter another number:");
 scanf("%d",&b);
 printf("the addition of two number is %d",a+b);
 }
 else if (input==2){
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter another number:");
 scanf("%d",&b);
 printf("the substraction of two number is %d",a-b);
 }
 else if (input==3){
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter another number:");
 scanf("%d",&b);
 printf("the multipplication of two numbers is %d",a*b);
 }
 else if (input==4){
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter another number:");
 scanf("%d",&b);
 printf("the multipplication of two numbers is %d",a/b);
 }
 else{
 printf("invalid number!");
 }
 getch();
}
