#include <stdio.h>
int main()
{
    int n, j, l;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= ((2 * n) - 1); j++)
        {
            if (j >= (6 - i) && j <= (4 + i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}