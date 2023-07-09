//Write a C program to enter temperature in fahrenheit and convert it into celsius
#include<stdio.h>
int main(){
    float t;
    printf("Enter temperature in fahrenheit :");
    scanf("%f",&t);
    printf("\n Temperarture in celsius is %f \n",((t-32)*5)/9);
    return 0;
}