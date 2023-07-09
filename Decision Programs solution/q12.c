// Write a C Program to find largest of two numbers using switch case
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    switch (a > b)
    {
    case 1:
        printf("%d is greatest\n", a);
        break;
    case 0:
        if (a == b)
        {
            printf("Both are equal\n");
            break;
        }
        else
            printf("%d is greater\n", b);
        break;
    }

    return 0;
}