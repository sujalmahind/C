#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student {
 int roll;
 float cgpa;
 char name[20];
 };
void main()
{
struct student ece[100];
struct student cse[100];
clrscr();
ece[0].roll=241;
cse[0].cgpa=75.46;
strcpy(ece[0].name,"sujal");
cse[0].roll=240;
cse[0].cgpa=85.66;
strcpy(cse[0].name,"karthik");
printf("\nname=%s\n",ece[0].name);
printf("roll no. =%d\n",ece[0].roll);
printf("cgpa = %f\n",ece[0].cgpa);
printf("\nname=%s\n",cse[0].name);
printf("roll no. =%d\n",cse[0].roll);
printf("cgpa = %f\n",cse[0].cgpa);
getch();
}
