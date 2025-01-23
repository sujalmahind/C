#include<stdio.h>
#include<conio.h>
void main()
{
 int avg,sum=0;
 int i;
 int marks[3];
 clrscr();
 for(i=0;i<=2;i++)
 {
 printf("enter marks");
 scanf("%d",&marks[i]);
 }
 for(i=0;i<=2;i++)
 sum=sum+marks[i];
 avg=sum/3;
 printf("average marks %d\n",avg);
 getch();
}
