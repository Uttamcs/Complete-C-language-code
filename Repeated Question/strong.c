#include <stdio.h>
int main()
{
    int n, a, rem, fact, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int temp = n;
    while (n)
    {
        rem = n % 10;
        int i = 1, fact = 1;
        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == temp)
        printf("%d is a strong number", temp);
    else
        printf("%d is not a strong number", temp);

    return 0;
}