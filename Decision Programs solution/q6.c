// Suppose you start writing a C program at time T1 (hh:mm:ss).Attime T2 (hh:mm:ss)coding is finished.After compiling code,you get an error,
// and it took you T3(hh:mm:ss) Decision Control Statement time to fix the error.Write a program to find the total time (hh:mm:ss)that you
// spent in executing this program.

#include <stdio.h>
int main()
{
    int h, m, s;
    int h1, m1, s1;
    int h2, m2, s2;
    printf("Enter start time in the format hh:mm:ss\n");
    scanf("%d:%d:%d", &h, &m, &s);
    printf("Enter end time in the format hh:mm:ss\n");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Enter the time for error fixing in the format hh:mm:ss\n");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    int final_hour=(h1-h)+h2;
    int final_min=(m1-m)+m2;
    int final_sec=(s1-s)+s2;
    if (final_sec>59)
    {
        int inc_min=final_sec/60;
        final_min=final_min+inc_min;
        final_sec=final_sec%60;
        if (final_min>59)
        {
            int inc_hr=final_min/60;
            final_hour=final_hour+inc_hr;
        }
        
    }
    printf("Total time in execution of a program is %.2d %.2d %.2d",final_hour,final_min,final_sec);
    return 0;
}