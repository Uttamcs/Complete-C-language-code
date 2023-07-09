// WAP to input an array of Nnumber of elements and store all even numbers in 1 array
// and all oddnumbers in another array.Print both the even and odd array separately
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
    int _count = (size - count);
    int even[count], odd[_count], k = 0, l = 0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            even[k] = arr[i];
            k++;
        }
        else
        {
            odd[l] = arr[i];
            l++;
        }
    }
    printf("Elements of even array\n");
    for (int k = 0; k < count; k++)
    {
        printf("%d\t", even[k]);
    }
    printf("\nElements of an odd array\n");
    for (int l = 0; l < _count; l++)
    {
        printf("%d\t", odd[l]);
    }

    return 0;
}