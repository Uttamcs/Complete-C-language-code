#include <stdio.h>
int main()
{
    int n,i,j,m;
    printf("Enter row number:\n");
    scanf("%d", &n);
    m=n;
    for (int i = 1; i < (2*n); i++)
    {
        for (int j = 1; j < (2*n); j++)
        {
           int k=(2*n);
           if ((i-1)<i<(i+1)||(k-1)<i<k||(j-1)<j<(j+1)||(k-1)<j<k)
           {
             printf("%d",m);
           }
           else 
           printf("p");
        }
        printf("\n");
    }

    return 0;
}