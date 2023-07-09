#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
    printf("%d\t",arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    printf("\nSorted array are given below:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
    return 0;
}