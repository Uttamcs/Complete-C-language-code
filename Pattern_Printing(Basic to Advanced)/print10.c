#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row number:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=2*n; j++)
        {
            if ((j>n-i)&&j<=((2*n)+1)-i)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}