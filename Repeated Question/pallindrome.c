#include <stdio.h>
int main()
{
    int n, rem, temp, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    if (temp == sum)
        printf("%d is a pallindrome number", sum);
    else
        printf("%d is not a pallindrome number", sum);
    return 0;
}