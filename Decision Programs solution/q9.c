// Write a C Program to find weather an entered year is leap or not.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year:\n");
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