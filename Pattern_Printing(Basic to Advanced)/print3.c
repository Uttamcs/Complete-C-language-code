#include <stdio.h>
int main()
{
    int i, j, rows, n, k = 0;
    printf("Enter number of rows:\n");
    scanf("%d", &rows);
    n = (rows + 1) / 2;
    for (int i = 1; i <= rows; i++)
    {
        if (rows % 2 == 0)
        {
            if (i <= n)
                k++;
            if (i > n + 1)
                k--;
        }
        else
            i <= n ? k++ : k--;

        for (int j = 1; j <= rows; j++)
        {
            if (j >= (n + 1 - k) && j <= (n - 1 + k))
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