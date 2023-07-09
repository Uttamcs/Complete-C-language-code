#include <stdio.h>
int main()
{
    int a, i, c = 1;
    printf("enter the num:\n");
    scanf("%d",&a);
    if (a == 0 || a == 1)
    {
        c = 1;
    }

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            c = 0;
            break;
        }
    }
    if (c == 1)
        printf("%d is a prime", a);
    else
        printf("%d is not prime", a);
    return 0;
}