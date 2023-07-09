#include <stdio.h>

int main()
{
    int num, n, m, rem, sum=0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    m=n;

    while (n)
    {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
    }
    if (m==sum)
    {
   printf("Yes,%d is a armstrong number",sum);
    }
    else
    printf("No, %d is not a armstrong number",sum);
    
    return 0;
}
