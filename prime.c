#include <stdio.h>
int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i % j == 0)

                break;

            if (i == j)

                printf("%d ", j);
        }
    }

    return 0;
}