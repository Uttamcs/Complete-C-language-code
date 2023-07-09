#include <stdio.h>
int main()
{
    int n, z, k;
    printf("Enter the number=\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        z = 1;
        k = 1;
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if ((j >= n + 1 - i) && (j <= (n - 1 + i)))
            {
                if (k)
                {
                    if (i % 2 != 0)
                    {
                        printf("%d", z++);
                    }
                    else
                        printf("%c", ch++);
                }
                else
                {
                    printf(" ");
                }
                k = 1 - k;
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