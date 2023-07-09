#include <stdio.h>
int main()
{
    int i, j, n, k = 0, rows;
    printf("Enter number of rows:\n");
    scanf("%d", &rows);
    n = (rows + 1) / 2;

    for (int i = 1; i <= rows; i++)
    {
        if (rows % 2 == 0)
        {
            if (i <= n)
            {
                k++;
            }
            if (i > n + 1)
            {
                k--;
            }
        }
        else
            i > n ? k-- : k++;
        for (int j = 1; j <= n; j++)
        {
            if (j <= k)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}