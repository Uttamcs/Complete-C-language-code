//Write a C program to enter radius of the circle and finds it's diameter, circumference and area.
#include<stdio.h>
int main(){
    float r;
    printf("Enter radius :");
    scanf("%f",&r);
    printf("\n The diameter,circumference,area of the circle is  %f, %f, %f respectievely\n",2*r,2*3.14*r,3.14*r*r);
    return 0;
}