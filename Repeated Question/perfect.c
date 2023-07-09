#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    while (i<n)
    {
        if (n%i==0)
            sum+=i;
            i++;
    }
    if (sum==n)
    {
       printf("%d is a perfect number\n",n);
    }
    else
    printf("%d is not a perfect number",n);
    return 0;
}