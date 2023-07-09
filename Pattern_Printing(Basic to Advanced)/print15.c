#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        char k=64+i;
        for (int j = 1; j<= i; j++)
        {
            printf("%c",k--);
            //we can also go through given below logic:-
                // printf("%c",k);
                // j>=1?k--:k++;
        }
        printf("\n");
    }
    
    return 0;
}