//Write a program using pointers to compute the sum of all elements stored in an array

#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter the elements of the array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of all elements in the array is %d",sum);
    return 0;
}