// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = i;  j<= 7; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (j<=(n-i))
            {
                printf(" ");
            }
            else
                printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}