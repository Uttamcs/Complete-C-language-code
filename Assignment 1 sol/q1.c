//Write a C program to input/output basic data types
#include<stdio.h>
int main(){
    int a;
    printf("Enter a integer:\n");
    scanf("%d",&a);
    printf("The entered integer is %d\n",a);
    float b;
    printf("Enter a float value:\n");
    scanf("%f",&b);
    printf("The entered integer is %f\n",b);
    char chr;
    printf("Enter a character:\n");
    scanf("%c",&chr);
    printf("The entered character is %c\n",chr);
    return 0;
}