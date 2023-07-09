//WAP to sum till entered number
#include <stdio.h>
int main()
{
    
    int n,sum=0,i;    
    printf("Enter the number:");
    scanf("%d", &n);  
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;

    }
        printf("the sum is %d\n", sum);
    

    return 0;
}