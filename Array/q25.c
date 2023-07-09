// WAP to input an array of N number of elements and find the frequency of all elements in that array.
#include <stdio.h>
int main()
{
    int size, count = 0;
    printf("Enter the size of an array:-\n");
    scanf("%d",&size);
    int arr[size], freq[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        count = 1;
        if(arr[i]!=-1)
        { 
        for (int k = i+1; k < size; k++)
        {
            if (arr[i] == arr[k])
            {
                count++;
                arr[k] =-1;
            }
        }
        freq[i]=count;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]!=-1)
        {
            printf("\n%d occurs %d times\n",arr[i],freq[i]);
        }
    }
    return 0;
}