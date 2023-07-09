#include <stdio.h>
int main()
{
    int n,k;
    printf("enter a number:\n");
    scanf("%d", &n);
    k=n%2;
    switch (k)
    {
    case 0:
        printf("%d is even number\n",n);
        break;
    case 1:
        printf("%d is a odd number",n);
        break;
    
    default:
        break;
    }
    return 0;
}