//Write a C program to enter two angles of a triangle and find it's third term
#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Enter first angle :");
    scanf("%d",&x);
    printf("Enter second angle :");
    scanf("%d",&y);
   
    printf("\n The value of third angle is %d\n",180-(x+y));
    return 0;
}