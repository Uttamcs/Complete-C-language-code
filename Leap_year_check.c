// WAP to check leap year
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year:");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 400 == 0 && a%100 !=0)
    {
        printf("It's a leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
    return 0;
}