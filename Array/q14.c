// WAP to input an array of N number of elements (Elements can repeat).Input an element
// you want to search and find it.If found then print all the positions of that element otherwise print not found
#include <stdio.h>
int main()
{
    int size,flag=1;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n,k=0,index[size];
    printf("Enter the number which you want to search:\n");
    scanf("%d",&n);
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==n)
        {
            index[k]=i;
            k++;
            flag=0;
        }
    }
    if (flag==0)
    {
    printf("%d found at ",n);
    for (int i = 0; i < k; i++)
    {
        printf("%d,",index[i]+1);
    }
    }
    else
    printf("NOT FOUND\n");
    return 0;
}