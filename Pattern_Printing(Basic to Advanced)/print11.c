#include<stdio.h>
int main()
{
    int n;
    printf("Enter row number:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int num=1;
        char ch='A';
        for (int j = 1; j <= 2*n; j++)
        {
            if (j>=(n+1-i) && j<=(n+i))
            {
                if (j<=n)
                {
                    printf("%d",num);
                    num++;
                }
                else if (j>n)
                {
                    printf("%c",ch);
                    ch++;
                }
            }
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}