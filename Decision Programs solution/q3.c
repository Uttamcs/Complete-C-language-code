// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs.0.50/unit
// For next 100 units Rs.0.75/unit
// For next 100 units Rs.1.20/unit
// For unit above 250 Rs.1.50/unit
// An additional surcharge of 20% is added to the bill.
#include <stdio.h>
int main()
{
    int a;
    float b, c, d;
    printf("Enter total electricity unit:\n");
    scanf("%d", &a);
    if (a <= 50)
    {
        b = (a * 0.50);
    }
    else if (a <= 150)
    {
        b = 25 + ((a - 50) * 0.75);
    }
    else if (a <= 250)
    {
        b = 25 + 75 + ((a - 150) * 1.20);
    }
    else if (a >= 500)
    {
        b = 25 + 75 + 120 + ((a - 250) * 1.50);
    }
    b = b + (0.2 * b);
    printf("Total bill after adding 20%% surcharge is %f\n", b);
    return 0;
}