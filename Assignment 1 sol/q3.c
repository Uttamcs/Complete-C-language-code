//Write a C program to input two numbers and perform all airthmetic operations
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("\nEnter second number:\n");
    scanf("%d",&b);
    printf("\nThe sum of the number is  %d\n",a+b);
    printf("\nThe difference of the number is  %d\n",a-b);
    printf("\nThe product of the number is  %d\n",a*b);
    printf("\nThe divisor of number is  %d\n",a/b);
    printf("\nThe remainder of the two number is  %d\n",a%b);
    return 0;
}