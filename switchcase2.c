#include<stdio.h>
#include<conio.h>
void main()
{
 int x=10,y=5;
 clrscr();
 switch(x>y&&x+y>0)
 {
 case 1:
 printf("hi");
 break;
 case 0:
 printf("bye");
 break;
 default:
 printf("hello bye");
 }
 getch();
}
