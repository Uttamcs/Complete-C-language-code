//Write a C program to input length and breadth of a reactangle and finds its perimeter
#include<stdio.h>
int main(){
    int l,b,perimeter;
    printf("Enter length :");
    scanf("%d",&l);
    printf("\nEnter breadth :");
    scanf("%d",&b);
    printf("\n The perimeter of the rectangle is  %d and it's area is %d\n",2*(l+b),l*b);
    return 0;
}