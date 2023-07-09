// WAP to input an array of N elements and delete all the elements from that array which are perfect number
#include <stdio.h>
int main()
{
    int size, i, j, k, rem, count = 0;
    printf("Enter the size of an array:-\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        int sum = 0;
        for (k = 1; k < arr[i]; k++)
        {
            rem = arr[i] % k;
            if (rem == 0)
            {
                sum += k;
            }
        }
        if (sum == arr[i])
        {
            count++;
            for (int k = i; k < size; k++)
            {
                arr[k] = arr[k + 1];
            }
        }
    }
    for (int i = 0; i < size - count; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}