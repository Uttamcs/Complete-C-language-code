//Write a C program to calculate x^y.
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,c;
    printf("Enter value of x :");
    scanf("%d",&x);
    printf("Enter value of y :");
    scanf("%d",&y);
    c=pow(x,y);
    printf("\n The value of x^y is %d\n",c);
    return 0;
}