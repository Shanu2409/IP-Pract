//Write a program to find the area of rectangle, square and circle.

#include<stdio.h>
int main()
{
    int l,b,r;
    int pi = 3.14;
    printf("Enter the length and breadth and radius:");
    scanf("%d%d%d",&l,&b, &r);
    printf("Area of rectangle is %d \n",l*b);
    printf("Area of square is %d \n",l*l);
    printf("Area of circle : %d \n", pi*(r*r));
    
    return 0;
}