#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number=\n");
    scanf("%d", &n);
    for (int i = 1; i <= 3 * n; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (i <= n)
            {
                if (j >= (2 * n) - i)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            else if (i <= 2 * n)
            {
                if (j == n)
                {
                    printf("|");
                }
                else if (j >= i || j < i - n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if (i <= 3 * n)
            {
                if (j <= ((3 * n) + 1) - i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}