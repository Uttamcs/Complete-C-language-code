//WAP to input an array of N number of elements and find their standard deviation 
#include <stdio.h>
#include<math.h>
int main()
{
    int size;
    float mean,sum=0;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    mean=sum/size;
    float difference,variance,square_difference,sum_sq_diff=0;
    for (int i = 0; i < size; i++)
    {
        difference=(arr[i]-mean);
        square_difference=pow(difference,2);
        sum_sq_diff+=square_difference;
    }
    variance=sum_sq_diff/size;
    float std_dev;
    std_dev=sqrt(variance);
    printf("Standard deviation is %f",std_dev);

    return 0;
}