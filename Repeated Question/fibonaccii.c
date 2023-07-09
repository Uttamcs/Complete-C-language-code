#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nxt;
    printf("Enter the number till you want to print:\n");
    scanf("%d", &n);

    printf("0,1,");
    for (int i = 0; i < n; i++)
    {
        nxt = t1 + t2;
        if (nxt < n)
        {
            printf("%d,", nxt);
            t1 = t2;
            t2 = nxt;
        }
    }

    return 0;
}