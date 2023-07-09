// Write a C program to add,subtract,multiply,divide and find remainder using switch
#include <stdio.h>
int main()
{
    int a, b;
    char opr;
    printf("enter a operator(+,-,*,/,%%):");
    scanf("%c", &opr);
    switch (opr)
    {
    case '+':
        printf("Enter first number:");
        scanf("%d", &a);
        printf("\nEnter second number:");
        scanf("%d", &b);
        printf("\nThe sum is:%d", a + b);
        break;

    case '-':
        printf("Enter first number:");
        scanf("%d", &a);
        printf("\nEnter second number:");
        scanf("%d", &b);
        printf("\nThe difference of two number is:%d", a - b);
        break;

    case '*':
        printf("Enter first number:");
        scanf("%d", &a);
        printf("\nEnter second number:");
        scanf("%d", &b);
        printf("\nThe product is:%d", a * b);
        break;

    case '/':
        printf("Enter dividend:");
        scanf("%d", &a);
        printf("\nEnter divisor:");
        scanf("%d", &b);
        printf("\nThe quotient of two number is:%d", a / b);
        break;

    case '%':
        printf("Enter dividend:");
        scanf("%d", &a);
        printf("\nEnter divisor:");
        scanf("%d", &b);
        printf("\nThe remainder is:%d", a % b);
        break;
    }
    printf("\nThank uhhh for using mehh!!");
    return 0;
}