// WAP to input an array of N number of elements and find the frequency of an inputted element in that array.
#include <stdio.h>
int main()
{
    int size, num,count = 0;
    printf("Enter the size of an array:-\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\nEnter the number for which we have to find frequency:");
    scanf("%d", &num);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            count++;
    }
    printf("%d occurs %d times\n", num, count);
    return 0;
}