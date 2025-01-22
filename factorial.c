#include<stdio.h>
#include<conio.h>
void main()
{
 int factorial(int n){
 clrscr();
 if(n==0){
 return 1;
 }
 else{
 return n * factorial(n-1);
 }
}
 int fibbonacci(int n){
 if(n == 0){
 return 0;
 }
 else if(n==1){
 return 1;
 }else {
 return (fibbonacci(n-1)+fibbonacci
