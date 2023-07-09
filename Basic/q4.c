// Write a program to calculate the age of a person
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Birth year:");
    scanf("%d",&a);
    printf("Enter current year:");
    scanf("%d",&b);
    printf("Current age is %d",b-a);

    return 0;
}