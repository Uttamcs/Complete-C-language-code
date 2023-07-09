// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size of the matrix:\n");
//     scanf("%d", &size);
//     int arr[size][size];
//     printf("Enter elements of matrix 1:\n");
//     for (int i = 0; i < size; i++)
//     {
//         for (int k = 0; k < size; k++)
//         {
//             scanf("%d", &arr[i][k]);
//         }
//     }
//     printf("Enter elements of matrix 2:\n");
//     int _arr[size][size];
//     for (int i = 0; i < size; i++)
//     {
//         for (int k = 0; k < size; k++)
//         {
//             scanf("%d", &_arr[i][k]);
//         }
//     }
//     int array[size][size];
//     for (int i = 0; i < size; i++)
//     {
//         for (int k = 0; k < size; k++)
//         {
//             printf("%d ", arr[i][k] + _arr[i][k]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int seen[10]={0};
    int N;
    printf("Enter the num:");
    scanf("%d",&N);
    int rem;
    while (N>0)
    {
        rem=N%10;
        if (seen[rem]==1)
        break;
        seen[rem]=1;
        break;
        seen[rem]=1;
        N=N/10;
        
    }
    if (N>0)
    {
        printf("Yes");
    }else
    printf("No");
    return 0;
}