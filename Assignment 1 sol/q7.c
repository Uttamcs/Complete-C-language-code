//Write a C program to enter length in cm and convert it into meter and kilometer
#include<stdio.h>
int main(){
    float l;
    printf("Enter length in cm :");
    scanf("%f",&l);
    printf("\n Length in meter and kilometer is  %f and %f respectievely\n",(l/100),(l/100000));
    return 0;
}