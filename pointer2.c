#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 int*ptr;
 int**pptr;
 clrscr();
 i=5;
 ptr=&i;
 pptr=&ptr;
 printf("\n Address of variable i :%d\n",&i);
 printf("Value of variable i : %d\n",i);
 printf("\n Adress of pointer ptr:%d\n",&(*ptr));
 printf("Value of pointer ptr :%d\n",*ptr);
 printf("\n Address of pointer pptr : %d\n",&(*pptr));
 printf("Value of pointer pptr :%d\n",*pptr);
 printf("\n Address of pointer to pointer pptr :%d\n",&(**pptr)); printf("Value of pointer to pointer pptr :%d\n",**pptr);
 getch();
}
