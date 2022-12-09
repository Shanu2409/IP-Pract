//Write a program to swap two numbers without using third variable

#include<stdio.h>
int main(){
   int x,y;
   printf("enter x and y values:");
   scanf("%d%d",&x,&y);
   printf("Before swap x=%d and y=%d \n",x,y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("After swap x=%d and y=%d",x,y);
   return 0;
}