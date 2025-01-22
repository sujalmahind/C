#include<stdio.h>
#include<conio.h>
void main()
{
 int temp;
 clrscr();
 printf("enter the tempertaure :");
 scanf("%d",&temp);
 if (temp>100){
 printf("you have fever! please take care");
 }
 else {
 printf("you might feeling sick,but you don't have fever");
 }
 getch();
}
