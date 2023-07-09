#include <stdio.h>
#include <math.h>
int main()
{
    int n, k, rem, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        k = (rem*rem*rem);
        sum = sum+k;
        n = n / 10;
    }
    if (temp == sum)
        printf("%d is a armstrong number", sum);
    else
        printf("%d is not a armstrong number", sum);
    return 0;
}