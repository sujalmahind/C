#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,input;
 int arr[3][3];
// int dl;
 clrscr();
 printf("1diagonal\n2transpose\n");
 printf("enter your option:");
 scanf("%d",&input);
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("enter the matrix [%d][%d]:",i,j);
 scanf("%d",&arr[i][j]);
 }
 }
 printf("\5the entered matrix is ");
 for(i=0;i<3;i++)
 {
 printf("\n");
 for(j=0;j<3;j++)
 {
 printf("%d\t",arr[i][j]);
 }
 }
 // dl=(arr[0][0],arr[0][1],arr[2][2]);
 if(input==1)
 {
 printf("\n\4the diagonals of this matrix are:
%d,%d,%d",arr[0][0],arr[1][1],arr[2][2]);
 }
 else if(input==2)
 {
 printf("\n\4transpoose of matrix is\n ");
 for(i=0;i<3;i++)
 {
 printf("\n");
 for
 (j=0;j<3;j++)
 {
 printf("%d\t",arr[j][i]);
 }
 }
 }
 getch();
}
