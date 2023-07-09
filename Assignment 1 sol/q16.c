//Write a C program to enter the value of marks of five subject and finds total marks and their percentage
#include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("Enter marks of first subject:");
    scanf("%f",&a);
    printf("\nEnter marks of second subject:");
    scanf("%f",&b);
    printf("\nEnter marks of third subject:");
    scanf("%f",&c);
    printf("\nEnter marks of fourth subject:");
    scanf("%f",&d);
    printf("\nEnter marks of fifth subject:");
    scanf("%f",&e);
    printf("\nTotal marks is %f average marks is %f percentage scored is %f %% \n",(a+b+c+d+e),(a+b+c+d+e)/5,(a+b+c+d+e)/5);
    return 0;
}