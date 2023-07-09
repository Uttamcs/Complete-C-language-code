#include <stdio.h>
int main()
{
    int a, b, c, i, lcm;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    c = (a > b) ? a : b;
    while (1)
    {
        if (c % a == 0 && c % b == 0)
        {
            printf("LCM is %d", c);
            break;
        }
        c++;
    }

    return 0;
}