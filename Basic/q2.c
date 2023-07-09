// Write a program to explain how to take input from user for different datatypes available in C language.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a integer:\n");
    scanf("%d", &a);
    printf("The entered integer is %d\n", a);
    float b;
    printf("Enter a float value:\n");
    scanf("%f", &b);
    printf("The entered integer is %f\n", b);
    char chr;
    printf("Enter a character:\n");
    scanf("%c", &chr);
    printf("The entered character is %c\n", chr);
    return 0;
} 