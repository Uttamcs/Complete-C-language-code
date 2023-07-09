//WACP to find diameter, circumference and area of circle using functions
#include<stdio.h>
float diameter(float);
float circumference(float);
float area(float);
int main()
{
    float rad;
    printf("Enter the radius:\n");
    scanf("%f",&rad);
    printf("The diameter is:%f\n",diameter(rad));
    printf("The circumference is:%f\n",circumference(rad));
    printf("The area is:%f\n",area(rad));
    return 0;
}
float diameter(float rad)
{
    return 2*rad;
}
float circumference(float rad)
{
    return 2*3.14*rad;
}
float area(float rad)
{
    return 3.14*rad*rad;
}
