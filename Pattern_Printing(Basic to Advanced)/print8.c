#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        char ch='A';
        for (int j = 1; j<=((2*n)-1); j++)
        {
            if ((j>=n+1-i)&& (j<=n-1+i))
            {
                printf("%c",ch);
                if (j<n)
                {
                    ch++;
                }
                else
                ch--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}