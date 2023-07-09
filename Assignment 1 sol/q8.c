//Write a C program to enter temperature in celsius and convert it into fahrenheit
#include<stdio.h>
int main(){
    float t;
    printf("Enter temperature in celsius :");
    scanf("%f",&t);
    printf("\n Temperarture in fahrenheit is %f \n",(1.8*(t-273.15)+32));
    return 0;
}