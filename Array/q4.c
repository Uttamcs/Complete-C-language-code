// WAP to input an array of N number of elements and count total number of positives,
// negatives and zero elements in that array and display those counts
#include <stdio.h>
int main()
{
    int size, count=0, poscount=0, negcount=0;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
        if (arr[i] < 0)
        {
            negcount++;
        }
        else if (arr[i] > 0)
        {
            poscount++;
        }
        else if (arr[i] == 0)
        {
            count++;
        }
    }
        printf("\nPositive number in an array is %d\n",poscount);
        printf("Negative number in an array is %d\n",negcount);
        printf("Zero in an array is %d times\n",count);
    return 0;
}