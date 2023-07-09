//Write a C program to enter the value of P,T,R and calculate simple interest
#include<stdio.h>
int main(){
    float p,t,r;
    printf("Enter marks of P:");
    scanf("%f",&p);
    printf("\nEnter marks of T:");
    scanf("%f",&t);
    printf("\nEnter marks of R:");
    scanf("%f",&r);
    printf("\nSimple interest is %f\n",(p*t*r)/100);
    return 0;
}