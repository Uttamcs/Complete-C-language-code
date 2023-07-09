// WACP to concatenate two strings with and without function.
#include <stdio.h>
int main()
{
    char str[100], _str[100];
    printf("Enter first string:\n");
    fgets(str, 100, stdin);
    printf("Enter second string:\n");
    fgets(_str, 100, stdin);
    int count = 0, _count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; _str[i] != '\0'; i++)
    {
        _count++;
    }
    int n = count + _count;
    char newstr[n];
    int k = 0;
    for (int i = 0; i < count; i++)
    {
        newstr[i] = str[i];
        k = i;
    }
    int l;
    for (int i = 0; i < _count; i++)
    {
        newstr[k + i] = _str[i];
        l = i;
    }
    newstr[k + l] = '\0';
    printf("String after appending is:\n");
    fputs(newstr, stdout);

    return 0;
}