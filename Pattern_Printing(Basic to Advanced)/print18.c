#include<stdio.h>
int main ()
{
    int n;
    char k,ch='A';
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
            k=ch;
        for (int j = 1; j <=n; j++)
        {
            if (j>n-i)
            {
            printf("%c",k);
            k--;
            }
            else
                printf(" ");
            
        }
        printf("\n");
        ch+=i+1;
    }
    
    return 0;
}