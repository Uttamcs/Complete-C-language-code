//WAP to print factorial of n 

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n > 0)
    {
        int fact = 1;
        for (i = 1; i <= n; i++)
            fact = fact * i;
        printf("%d", fact);
    }
    else if (n < 0)
    {
        int fact=n;
        for (i=n+1; i <= -1; i++)
            fact = fact * i;

        printf("%d", fact);
    }
    else
    printf("Invalid Character");

    return 0;
}

