// WAP to calculate no of vowels in a string
#include <stdio.h>
int countvowels(char str[]);
int main()
{
    char str[100];
    printf("Enter strings of range 100:");
    fgets(str, 100, stdin);
    printf("Vowels are %d", countvowels(str));
    return 0;
}
int countvowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        ||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}