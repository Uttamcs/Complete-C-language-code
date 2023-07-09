//Write a C program to enter any number and calculate it's square root
#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter first number :");
    scanf("%d",&x);
   
    printf("\n The value of square root of number is %f\n",sqrt(x));
    return 0;
}