#include <stdio.h>
int main()
{
    int n,a,c;
    printf("Enter the number range:-\nEnter first number:\n");
    scanf("%d", &a);
    printf("Enter last number:\n");
    scanf("%d", &n);
    for (int i = a; i <= n; ++i)
    {
        c=1;
        for (int j = 2; j <= i/2; ++j)
        {
            if (i % j == 0)
            {
                c=0;
                break;
            }
        }
            if (c==1)
            {
                printf("%d\t", i);
            }
    }
    return 0;
}