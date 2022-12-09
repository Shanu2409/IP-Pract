//Write a program to find whether a given number is palindrome or not.

#include<stdio.h>
int main()
{
    int n;
    int rev = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp = n;
    while(n>0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(temp==rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}