// Write a program to calculate age of a person based on his given date of birth.
#include <stdio.h>
int main()
{
    int d, m, y;
    int d1, m1, y1;
    int d2, m2, y3;
    printf("Enter birth date in the format dd:mm:yyyy\n");
    scanf("%d:%d:%d", &d, &m, &y);
    int x = d + (m * 30) + (y * 365);
    printf("Enter current date in the format dd:mm:yyyy\n");
    scanf("%d:%d:%d", &d1, &m1, &y1);
    int x1 = d1 + (m1 * 30) + (y1 * 365);
    int diff = x1 - x;
    if (diff > 0)
    {
        int yr = diff / 365;
        int month = diff % 365;
        if (month > 0)
        {
            int c = month;
            month = month / 30;
            int day = c % 30;
            printf("Current age are in the format dd:mm:yy %d:%d:%d", day, month, yr);
        }
    }

    return 0;
}