//WAP to find greatest number among three numbers by using ternary operator
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter first number:");
    scanf("\n%d",&a);
    printf("Enter second number:");
    scanf("\n%d",&b);
    printf("Enter third number:");
    scanf("\n%d",&c);
    max=(a>b && a>c)?a:((b>a && b>c)?b:c);
    printf("The greatest number is %d",max);
    return 0;
}