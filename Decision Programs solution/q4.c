// Write a C program to input the cost price,selling price and maintenance price of the product and then calculate profit or loss 
// along with profit/loss percentage
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter cost price:\n");
    scanf("%f",&a);
    printf("Enter selling price:\n");
    scanf("%f",&b);
    printf("Enter maintenance price:\n");
    scanf("%f",&c);
    d=a+c;
    if (d<b)
    {
        float profit=b-d;
        profit=(profit/a)*100;
        printf("Profit%%  is %f%%",profit);
    }
    else if (d>b)
    {
        float loss=d-b;
        loss=(loss/a)*100;
        printf("Loss%%  is %f%%",loss);
    }
    else if (d==b)
    {
        printf("Neither profit nor loss");
    }
    return 0;
}