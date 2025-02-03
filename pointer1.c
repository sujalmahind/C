#include<conio.h>
#include<stdio.h>
void main()
{
 int* ab;
 int m;
 m=29;
 clrscr();
 printf("Address of m:%d\n",&m);
 printf("Value of m:%d\n\n",m);
 ab=&m;
 printf("now ab is assinged with the address of m.\n");
 printf("Address of pointer ab : %d\n",ab);
 printf("Content of pointer ab : %d\n\n",*ab);
 m=34;
 printf("The value of m assinged to 34 now.\n");
 printf("Adress of pointer ab : %d\n",ab);
 printf("value of m :%d\n\n",*ab);
 *ab=7;
 printf("The pointer variable ab is assinged the value 7 now.\n"); printf("Adress of m:%d\n",&m);
 printf("Value of m :%d\n\n",m);
 getch();
}
