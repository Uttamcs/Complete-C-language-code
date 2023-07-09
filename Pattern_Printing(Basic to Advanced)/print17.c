#include<stdio.h>
int main()
{
    int n,flag,k=0,p;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i%2==1)
        {
            k=k+1;
        }
        else
        {
            k--;
            k=k+i;
        }
        p=k;
        flag=1;
        for (int j = 1; j <= (2*n)-1; j++)
        {
            if (j>=1 && j<=(2*i)-1)
            {
                if (flag==1)
                {
                    printf("%d",p);
                    if (i%2)
                    {
                        p++;
                        k++;
                    }
                    else
                    p--;
                }
                else
                    printf("*");
                    flag=1-flag;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}