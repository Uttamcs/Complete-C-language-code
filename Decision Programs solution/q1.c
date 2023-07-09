// Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of x coordinate:\n");
    scanf("%d", &a);
    printf("Enter the value of y coordinate:\n");
    scanf("%d", &b);
    if (a > 0 && b > 0)
    {
        printf("Coordinate will lie in the first quadrant");
    }
    else if (a < 0 && b > 0)
    {
        printf("Coordinate will lie in the second quadrant");
    }
    else if (a < 0 && b < 0)
    {
        printf("Coordinate will lie in the third quadrant");
    }
    else if (a > 0 && b < 0)
    {
        printf("Coordinate will lie in the fourth quadrant");
    }
    else if (a == 0 && b == 0)
    {
        printf("Coordinate will lie on the origin");
    }
    else
        printf("INVALID VALUE");
    return 0;
}