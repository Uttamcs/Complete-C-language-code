// Write a program to find the Absolute Value of a Number.
#include <stdio.h>
float absolute(float n){
    if (n<0){
        return -n;
    }
    else
    return n;
    }

int main()
{
    float n;
    printf("Enter a number:");
    scanf("%f",&n);
    printf("Absolute value is %f", absolute(n));
    return 0;
}