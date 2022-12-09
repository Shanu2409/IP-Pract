//Write a program to check whether the entered number is Armstrong or not

#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
        int rem = temp%10;
        sum = sum + rem*rem*rem;
        temp = temp/10;
    }
    if(sum==n)
    {
        printf("The number is Armstrong");
    }
    else
    {
        printf("The number is not Armstrong");
    }
    return 0;
}