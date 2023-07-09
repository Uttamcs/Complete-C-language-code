#include <stdio.h>
int main()
{
    int a, c = 0;
    printf("Enter the number :\n");
    scanf("%d", &a);
    if (a == 0 || a == 1)
    {
        c = 1;
    }
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        printf("%d is a prime number", a);
    else
        printf("%d is not a prime number", a);
    return 0;
}