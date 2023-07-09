// WACP to count total number of vowels and consonants in a string.
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    int count_Consonants = 0, count_vowels = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') ||
                (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
            {
                count_vowels++;
            }
            else
                count_Consonants++;
        }
    }
    printf("Number of Consonants in a string are %d \n", count_Consonants);
    printf("Number of vowels in a string are %d \n", count_vowels);
    return 0;
}