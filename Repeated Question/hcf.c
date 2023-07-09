#include <stdio.h>
int main()
{
    int n, a,i,hcf;
    printf("Enter two numbers:\n");
    scanf("%d%d", &n,&a);
    for (int i = 1; i<=a||i<=n; i++)
    {
    if (a%i==0 && n%i==0)
    {
        hcf=i;
    }
    }
    printf("HCF=%d",hcf);

    return 0;
}