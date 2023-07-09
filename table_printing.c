// Write a c program to take a number from user and print its table

#include <stdio.h>

int main()
{ 
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }
    return 0;
}
