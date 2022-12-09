//Write a program to perform addition and subtraction of two pointer variables.

#include <stdio.h>

int main()
{
    int first, second, *p, *q, sum, sub;
    
    printf("Enter two integers number : \n");
    scanf("%d%d", &first, &second);
    
    p = &first;
    q = &second;
    
    sum = *p + *q;
    
    printf("Sum of entered numbers = %d\n",sum);

    sub = *p - *q;

    printf("Subtraction of entered numbers = %d\n",sub);
    
    return 0;
}