// Write a C program to find largest of three numbers using nested if-else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Enter third number:\n");
    scanf("%d",&c);
    if (a>b || a>c ||b>a ||b>c ||c>a || c>b)
    {
        if (a>b && a>c)
        {
            printf("%d is greater\n",a);
        }else if (b>c && b>a)
        {
            printf("%d is greater\n",b);
        }else if (c>a && c>b)
        {
            printf("%d is greater\n",c);
        } else if (a==b && b==c)
        {
           printf("All are equal");
        }
    }
    return 0;
} 