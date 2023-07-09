#include <stdio.h>
int main()
{
    int arr[5];
    int *ptr = &arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("%d index\n", i);
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Marks of %d index is %d\n", i, arr[i]);
    }
    return 0;
}