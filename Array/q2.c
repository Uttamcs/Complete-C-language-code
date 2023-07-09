//WAP to input an array of N number of elements and display it in reverse order.
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
    printf("Entered elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    for (int i = 0; i < size/2; i++)
    {
        int temp=arr[size-1-i];
        arr[size-i-1]=arr[i];
        arr[i]=temp;

    }
    printf("\nArray of an elements after reversing:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }

    return 0;
}