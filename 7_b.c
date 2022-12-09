//Write a program to find the sum of natural number using recursive function

#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }
}

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of natural numbers from 1 to %d is %d",n,sum(n));
    return 0;
}