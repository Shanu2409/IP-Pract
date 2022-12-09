//Write a program to find the addition, subtraction, multiplication and division of two numbers

#include <stdio.h>
int main()
{
    int first, second, add, subtract, multiply;
    float divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);
    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (float)second;   //typecasting
    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Multiplication = %d\n",multiply);
    printf("Division = %.2f\n",divide);
    
    return 0;
}
