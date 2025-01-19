#include<stdio.h>
#include<conio.h>
void main()
{
 int number=0;
 clrscr();
 printf9("enter a number:");
 scanf("%d",&number);
 switch(number){
 case 10:
 printf("number is equal to 10");
 break;
 case 50:
 printf("number is equal to 50");
 break;
 case 100:
 printf("number is equal to 100");
 break;
 default:
 printf("number is not equal to 10,50 or 100");
 }
 getch();
}
