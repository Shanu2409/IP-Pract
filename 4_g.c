//Write a program that solve the quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    printf("Enter the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    printf("The roots of the equation are %f and %f",root1,root2);
    return 0;
}