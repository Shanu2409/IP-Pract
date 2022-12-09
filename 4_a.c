//Write a program to find the sum of squares of digits of a number.

#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        int rem = n%10;
        sum = sum + rem*rem;
        n = n/10;
    }
    printf("The sum of squares of digits of the number is %d",sum);
    return 0;
}