//WACP to find cube of any number using function.
#include<stdio.h>
int cube(int);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("The cube of %d is %d",num,cube(num));
    return 0;
}
int cube(int num)
{
    return num*num*num;
}