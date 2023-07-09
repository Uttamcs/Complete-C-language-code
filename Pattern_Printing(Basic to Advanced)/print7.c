#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    // printf("Enter the number of columns\n");
    // scanf("%d",&);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=((2*n)-1); j++)
        {
            if (j>=i && j<=((2*n)-i))
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