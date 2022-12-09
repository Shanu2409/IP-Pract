//Write a program to find the sum of numbers from 1 to 100

#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i=1;i<=100;i++)
    {
        sum = sum + i;
    }
    printf("The sum of numbers from 1 to 100 is %d",sum);
    return 0;
}