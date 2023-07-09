// WAP to input an array of N number of elements.Input the position of element you want
// to delete.Print the element deleted and updated array after deletion of that element
#include<stdio.h>
int main()
{
    int size,num;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size],delete;
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("Enter the index of elements which you want to delete:\n");
        scanf("%d",&delete);
        for (int i = delete; i < size; i++)
        {
            arr[i]=arr[i+1];
        }
    printf("Array after deleting:-\n");
    for (int i = 0; i < size-1; i++)
    { 
        printf("%d\t",arr[i]);
    }
    return 0;
}