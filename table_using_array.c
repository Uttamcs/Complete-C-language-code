#include <stdio.h>
void storetable(int arr[][10], int n, int m, int number);
int main()
{   
    int n1,n2=0;
    printf("Enter two number:");
    scanf("%d %d",&n1,&n2);
    int table[2][10];
    storetable(table, 0, 10, n1);
    storetable(table, 1, 10, n2);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[0][i]);
    }

printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[1][i]);
    }

    return 0;
}
void storetable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
         arr[n][i] = number * (i + 1);
    }
}