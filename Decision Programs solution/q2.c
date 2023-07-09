// Write a C program of in the eligibility of admission for a professional course based on the following criteria:
// MarksinMaths>=65
// MarksinPhy>=55
// MarksinChem>=50
// Totalinallthreesubject>=180
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the marks of maths:\n");
    scanf("%f",&a);
    printf("Enter the marks of physics:\n");
    scanf("%f",&b);
    printf("Enter the marks of chemistry:\n");
    scanf("%f",&c);
    printf("Total marks is %f\n",a+b+c);
    if (a>=65 && b>=55 && c>=50)
    {
        printf("You are eligible for admission\n");
    }
    else
    printf("You are not eligible for admission\n");
    return 0;
}