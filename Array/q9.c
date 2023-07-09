// WAP to input an array of N number of elements and find the largest element in that array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
    scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\nThe maximum number in an array is %d",max);
    return 0;
}