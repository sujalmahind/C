#include<stdio.h>
#include<string.h>
#include<conio.h>
struct person
{
char name[50];
int cityno;
float salary;
}person1;
void main()
{
 clrscr();
 strcpy(person1.name,"sujal mahind");
 person1.cityno=10045;
 person1.salary=25000;
 printf("name :%s\n",person1.name);
 printf("citizanship no:%d\n",person1.cityno);
 printf("salary:%2f",person1.salary);
 getch();
}
