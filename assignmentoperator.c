#include<stdio.h>
#include<conio.h>
void main()
{
 int a,c;
 clrscr();
 printf("enter a number:");
 scanf("%d",&a);
 c = a;
 printf("c = %d\n",c);
 c += a;
 printf("c = %d\n",c);
 c -= a;
 printf("c = %d\n",c);
 c *= a;
 printf("c = %d\n",c);
 c /= a;
 printf("c = %d\n",c);
 c %= a;
 printf("c = %d\n",c);
 getch();
}
