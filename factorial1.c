//WAP to print factorial of n 

#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int pr=fact(n);
    printf("%d", pr);
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factnm1 = fact(n - 1);
    int factn = factnm1 * n;
    return factn;
}