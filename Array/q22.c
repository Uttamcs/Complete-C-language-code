// WAP to input an array of N number of elements.Left rotate this array by R number of
// rotations and print the final array.
// Example:-Suppose array is 4 5 3 9 1
// After left rotation by 1 it will be 5 3 9 1 4
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
    printf("Enter the number of rotation:\n");
    scanf("%d", &num);
    for (int k = 0; k < num; k++)
    {
        temp = arr[0];
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i + 1];
            arr[size] = temp;
        }
    }
    printf("Array after Rotating:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}