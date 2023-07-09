//Write a C program to enter two angles of a triangle and find it's third term
#include<stdio.h>
#include<math.h>
int main(){
    float x,y;
    printf("Enter base :");
    scanf("%f",&x);
    printf("Enter height:");
    scanf("%f",&y);
   
    printf("\n The value ofarea of triangle is %f\n",(x*y)/2);
    return 0;
}