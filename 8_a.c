//Write a program to find the largest value that is stored in the array

#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter the elements of the array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("The largest value in the array is %d",max);
    return 0;
}