// WAP to input an array of N number of elements.Input the element you want to delete
// and delete the first occurrence of that element from that array.Print the updated array
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
        printf("Enter the element which you want to delete:\n");
        scanf("%d",&num);
        for (int i = 0; i < size; i++)
        {
            if (arr[i]==num)
            {
                for (int k = i; k <size-1 ; k++)
                {
                    arr[k]=arr[k+1];
                }
            }
        }
    printf("Array after deleting:-\n");
    for (int i = 0; i < size-1; i++)
    { 
        printf("%d\t",arr[i]);
    }
    return 0;
}