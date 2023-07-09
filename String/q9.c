// WACP to input a string and copy all the vowels,Consonants, digits and special characters in 4 different string then display those 4 strings
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    int count_spclchar = 0, count_digit = 0, count_Consonants = 0, count_vowels = 0;
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
        else if ((str[i] >= ' ' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
        {
            count_spclchar++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count_digit++;
        }
    }
    char Consonants[count_Consonants], vowels[count_vowels], spcl_char[count_spclchar], digit[count_digit];
    int m = 0, n = 0, q = 0, r = 0;
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {

            if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') ||
                (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
            {
                vowels[m] = str[i];
                m++;
            }
            else
            {
                Consonants[r] = str[i];
                r++;
            }
        }
        else if ((str[i] >= ' ' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
        {
            spcl_char[n] = str[i];
            n++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit[q] = str[i];
            q++;
        }
    }
    Consonants[m] = '\0';
    spcl_char[n] = '\0';
    digit[q] = '\0';

    printf("Consonants in a string are:\n");
    puts(Consonants);
    printf("vowels in a string are:\n");
    puts(vowels);
    printf("Special charcters in a string are:\n");
    puts(spcl_char);
    printf("Consonants in a string are:\n");
    puts(digit);
    return 0;
}