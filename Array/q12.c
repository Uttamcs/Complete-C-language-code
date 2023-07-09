 // WAP to input an array of N number of elements and find the second smallest element
// and 2nd largest element in that array.
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
    int largest1 = arr[0], largest2 = arr[1];
    if (largest1 < largest2)
    {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
    for (int i = 0; i < size; i++)
    {

        if (arr[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if ((arr[i] > largest2) && (arr[i] != largest1))
        {
            largest2 = arr[i];
        }
    }
    printf ("The FIRST LARGEST = %d\n", largest1);
    printf ("THE SECOND LARGEST = %d\n", largest2);
    int smallest1 = arr[0], smallest2 = arr[1];
    if (smallest1 > smallest2)
    {
        int temp = smallest1;
        smallest1 = smallest2;
        smallest2 = temp;
    }
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < smallest1)
        {
            smallest2 = smallest1;
            smallest1 = arr[i];
        }
        else if ((arr[i] < smallest2) && (arr[i] != smallest1))
        {
            smallest2 = arr[i];
        }
    }
    printf ("The FIRST SMALLEST = %d\n", smallest1);
    printf ("THE SECOND SMALLEST = %d\n", smallest2);

    return 0;
}