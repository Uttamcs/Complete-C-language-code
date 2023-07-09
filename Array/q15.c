// WAP to input an array of N number of elements and sort it in ascending order using bubble sort
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        }
    }
    printf("\nArray after sorting in ascending order ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}