//WAP to input an array of N number of elements and find the sum and average of all the
// elements of that array
#include <stdio.h>
int main()
{
    int size;
    float avg,sum=0;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered Array is:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
        sum+=arr[i];
    }
    
    avg=sum/size;
    printf("\nThe sum of given array is %f\n",sum);
    printf("The average of given array is %f\n",avg);
    return 0;
}