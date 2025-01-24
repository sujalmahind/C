#include<stdio.h>
#include<conio.h>
void main()
{
 int license;
 clrscr();
 printf("enter your age to check are you eligibile for apply license:"); scanf("%d",license);
 if (license>18){
 printf("you can apply for driving license");
 }
 else{
 printf("you cannot apply for dcriving license");
 }
 getch();
}
