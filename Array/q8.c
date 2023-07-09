// WAP to read the marks of 500 students of a course in computer programming and print the frequency of each score above 60.Do it using most efficient method you could
// taking minimum memory and minimum
#include <stdio.h>
int main()
{
    int size, count, greater60 = 0;
    printf("Enter the Number of students:\n");
    scanf("%d", &size);
    int arr[size], freq[size];
    printf("Enter the marks of student:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered marks of student:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
        if (arr[i] > 60)
        {
            greater60++;
        }
    }
    int large60[greater60 - 1], k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 60)
        {
            large60[k] = arr[i];
            k++;
        }
    }
    printf("\nNumber greater than 60 in the given array is:-\n");
    for (int k = 0; k < greater60; k++)
    {
        printf("%d,", large60[k]);
        freq[k]=-1;
    }
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int k = i + 1; k < size; k++)
        {
            if (large60[i] == large60[k])
            {
                count++;
                freq[k] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of an array:-\n");
    for (int i = 0; i < greater60; i++)
    {
        if (freq[i]!=0)
        {
            printf("%d occurs %d time\n",large60[i],freq[i]);
        }
    }
    return 0;
}