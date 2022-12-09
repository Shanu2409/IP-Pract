//Write a programs to print the Fibonacci series.

#include<stdio.h>
int main()
{
    int n;
    int a = 0;
    int b = 1;
    int c;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The Fibonacci series is:");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}