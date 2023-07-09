// WAP to input an array of Nnumber of elements and delete all the duplicate elements
#include <stdio.h>
int main()
{
    int size, count;
    printf("Enter the size of an array:-\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered elements of an array is :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int k = i + 1; k < size; k++)
        {
            if (arr[i] == arr[k])
            {
                count++;
                arr[k] = arr[k + 1];
            }
            size = size - count;
        }
    }
    printf("\nUpdated array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}