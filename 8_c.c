//Write a program to arrange the „n‟ numbers stored in the array in ascending and descending order

#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter the elements of the array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe elements of the array in ascending order are:");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nThe elements of the array in descending order are:");
    for(int i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}