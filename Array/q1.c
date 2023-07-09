//WAP to input an array of Nnumber of elements and display it
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
    return 0;
}