// WACP to find total number of alphabets, digits or special characyer in a string
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    int count_spclchar = 0, count_digit = 0, count_alphabets = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count_alphabets++;
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
printf("Number of alphabets in string is %d\n",count_alphabets);
printf("Number of digit in string is %d\n",count_digit);
printf("Number of special characters in string is %d\n",count_spclchar);

return 0;
}