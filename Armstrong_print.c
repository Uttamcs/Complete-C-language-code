#include<stdio.h>

int main()
{
    int num,n,m,rem, sum;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the value of m:");
    scanf("%d", &m);

    while(n <= m)
    {
        num = n;
        sum = 0;

        while(num)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }

        if(n == sum)
        {
            printf("%d is a Armstrong number\n", n);
        }

        n++;
    }

     return 0;
}
