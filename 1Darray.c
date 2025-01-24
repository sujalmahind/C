#include<stdio.h>
#include<conio.h>
void main()
{
 int a[4];
 int b[4]={1};
 int c[4]={1,2,3,4};
 int i;
 clrscr();
 printf("\narray a:\n");
 for(i=0;i<4;i++)
 printf("\narray[%d]:%d\n",i,a[i]);
 printf("\narray b \n");
 for (i=0;i<4;i++)
 printf("\narray[%d]:%d\n",i,c[i]);
 getch();
}
