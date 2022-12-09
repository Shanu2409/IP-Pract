//Write a program to check whether the entered number is prime or not.

#include<stdio.h>
int main()
{
    int n;
    int flag = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }
    return 0;
}