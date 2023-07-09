//Sum till entered n number
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number:");
    scanf("%d", &n);
    int sum;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}