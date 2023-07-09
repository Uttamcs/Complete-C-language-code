// Write a C program to input grades and credits of five subjects Physics,Chemistry,Biology,Mathematics and Computer.
// Find the SPI of student according to the university rule and print the Grade based on SPI
#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    printf("Enter marks of Physics:");
    scanf("%f", &a);
    printf("\nEnter marks of Chemistry:");
    scanf("%f", &b);
    printf("\nEnter marks of biology:");
    scanf("%f", &c);
    printf("\nEnter marks of Mathematics:");
    scanf("%f", &d);
    printf("\nEnter marks of Computer:");
    scanf("%f", &e); 
    float total_marks=a+b+c+d+e;
    float spi=total_marks/5;
    printf("%f",spi);
    return 0;
}