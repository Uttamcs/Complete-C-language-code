//WAP to calculate sum of digit
#include <stdio.h>

int main() 
{
    int a,m,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        m=a%10;
        sum+=m;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}

