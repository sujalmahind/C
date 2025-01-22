#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct student
{
char name[50];
int rollno;
float marks;
}stu;
void main()
{ stu stu1 = {"sujal", 241, 98};
 clrscr();
 /* printf("enter student name:");
 scanf("%s",&student1.name);
 printf("enter student roll no:");
 scanf("%d",&student1.rollno);
 printf("enter student marks:");
 scanf("%f",&student1.marks);*/
 printf("\nName : %s", stu1.name);
 printf("\nRoll No. : %d ", stu1.rollno);
 printf("\nMarks : %f ", stu1.marks);
 getch();
}
