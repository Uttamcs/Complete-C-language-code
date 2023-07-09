// Write a program to calculate the parking charges of a vehicle.Enter the type of vehicle as a character(like c for car,
// b for bus,etc.)and number of hours then calculate the parking charge given below-
// Truck/Bus-Rs.20per hour.
// Car-10Rs.per hour.
// Scooter/Motorcycle-Rs 5 per hour.

#include<stdio.h>
int main()
{
    char a;
    int b;
    printf("Enter c for car , b for bus/truck, m for scooter/ motorcycle:\n ");
    scanf("%c",&a);
    if (a=='c')
    {
        printf("Enter hour:\n");
        scanf("%d",&b);
        int pc=b*10;
        printf("Total parking charge is %d\n",pc);
    }
    else if (a=='b')
    {
        printf("Enter hour:\n");
        scanf("%d",&b);
        int pc=b*20;
        printf("Total parking charge is %d\n",pc);

    }
    else if (a=='m')
    {
        printf("Enter hour:\n");
        scanf("%d",&b);
        int pc=b*5;
        printf("Total parking charge is %d\n",pc);

    }else
    printf("Enter valid character");
    

    return 0;
}