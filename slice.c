//WAP to cut a word of specific range n to m from a string.
#include <stdio.h>

void slice(char str[], int n, int m);
int main()
{
    int n, m;
    char str[100];
    printf("Enter a sentence/string:");
    fgets(str,100,stdin);
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the value of m:");
    scanf("%d", &m);
    slice(str, n, m);
}
void slice(char str[], int n, int m)
{
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}