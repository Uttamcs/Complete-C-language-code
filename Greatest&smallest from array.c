#include <stdio.h>
int main()
{
    int smaller, greater;
    int arr[6];
    printf("Enter array of length 6:\n");
    for (int i = 0; i <= 5; i++)
        scanf("%d", &arr[i]);
    greater = smaller = arr[0];
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] > greater)
            greater = arr[i];

        if (arr[i] < smaller)
            smaller = arr[i];
            
    }



printf("Smallest number is %d\n", smaller);
printf("Greatest number is %d\n",greater);
printf("Difference  is %d",greater-smaller);
return 0;
}