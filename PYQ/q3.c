#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping x=%d and y=%d", a, b);
    return 0;
}