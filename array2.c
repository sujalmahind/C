#include<stdio.h>
#include<conio.h>
void main()
{
 int marks [10],i,n,sum=0;
 double average;
 clrscr();
 printf("enter number of elements:");
 scanf("%d",n);
 for(i=0;i<n;++i)
 {
 printf("enter number %d",i+1);
 scanf("%d",&marks[i]);
 sum+=marks[i];
 }
 getch();
}
