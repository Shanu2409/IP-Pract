// Write a program to check whether the number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("The number is Negative");
    }
    else if(n>0)
    {
        printf("The number is possitive");
    }
    else
    {
        printf("The number is zero");
    }

    return 0;
}