#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nxt;
    printf("Enter the number of term to be printed:\n");
    scanf("%d", &n);
    printf("%d,%d,", t1, t2);

    for (int i = 3; i <= n; i++)
    {
        nxt = t1 + t2;
        printf("%d,", nxt);
        t1 = t2;
        t2 = nxt;
    }
    return 0;
}