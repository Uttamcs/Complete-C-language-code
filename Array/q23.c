// WAP to input an array of N number of elements.Right rotate this array by R numberof
// rotations and print the final array.
// Example:-Suppose array is 4 5 3 9 1
// After Right rotation by 1 it will be 1 4 5 3 9
#include <stdio.h>
int main()
{
    int size, num, temp;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size], delete;
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of right rotation:\n");
    scanf("%d", &num);
    for (int k = 0; k < num; k++)
    {
        temp = arr[size - 1];
        for (int i = size - 2; i > 0 - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }
    printf("Array after Rotating:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}