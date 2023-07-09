//Write a C program to calculate area of an equilateral triangle
#include<stdio.h>
#include<math.h>
int main(){
    float a;
    printf("Enter side :");
    scanf("%f",&a);
    printf("\nThe value of area of triangle is %f\n",(sqrt(3)*a*a)/4);
    return 0;
}