#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter the number range:-\nEnter first number:\n");
    scanf("%d", &a);
    printf("Enter last number:\n");
    scanf("%d", &n);
    for (int i = a; i <= n; i++)
    {
        for (int j = 2; j < n; j++)
        {

            if (i % j == 0)
            {
                break;
            }
            else if(i==j+1)
            {
                printf("%d\t", i);
            }
        }
    }
    return 0;
}