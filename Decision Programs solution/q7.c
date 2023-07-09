// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter length of first side:\n");
    scanf("%d",&a);
    printf("Enter length of second side:\n");
    scanf("%d",&b);
    printf("Enter length of third side:\n");
    scanf("%d",&c);
    if (((a+b)>c) ||((b+c)>a) ||((c+a)>b))
    {
        printf("this is triangle\n");
    }
    else
    printf("this is not a triangle\n");
    
    return 0;
}