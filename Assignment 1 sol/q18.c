//Write a C program to enter the value of P,T,R and calculate compound interest
#include<stdio.h>
#include<math.h>
int main(){
    int n,t;
    float r,a,p,d,b;
    printf("Enter the value of p:");
    scanf("%f",&p);
    printf("Enter the value of r:");
    scanf("%f",&r);
    printf("Enter the value of n(number of times interest applied per time period):");
    scanf("%d",&n);
    printf("Enter the value of time :");
    scanf("%d",&t);
    a=(1+(r/n));
    d=n*t;
    b=pow(a,d);
    printf("Total amount is %f",p*b);
    return 0;
}