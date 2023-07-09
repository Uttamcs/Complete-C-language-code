// WAP to input an array of N number of elements and swap the largest and smallest
//  element in that array and print the updated array
#include <stdio.h>
int main()
{
    int size, min, mincount = 0, maxcount = 0;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    int copy[size];
    for (int i = 0; i < size; i++)
    {
        copy[m] = arr[i];
        m++;
    }
    printf("Array Before swapping max and min:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    int max = min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nMax=%d\nMin=%d\n", max, min);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            maxcount++;
        }
        if (arr[i] == min)
        {
            mincount++;
        }
    }
    int maxindex[maxcount], minindex[mincount], k = 0, l = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            maxindex[k] = i;
            k++;
        }
        if (arr[i] == min)
        {
            minindex[l] = i;
            l++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < mincount; k++)
        {
            if (i == minindex[k])
            {
                if (arr[i] == min)
                {
                    arr[i] = max;
                }
            }
        }
        for (int k = 0; k < maxcount; k++)
        {
            if (i == maxindex[k])
            {
                if (arr[i] == max)
                {
                    arr[i] = min;
                }
            }
        }
    }
    printf("Array after swapping max and min:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}