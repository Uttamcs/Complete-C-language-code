// Write a C program to input any character and if its upper case alphabet then convert it into lower case alphabet and vice versa using
// switch case
#include <stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    switch (ch >= 'A' && ch <= 'Z')
    {
    case 1:
        ascii = ch + 32;
        printf("%c\n", ascii);
        break;
    case 0:
        ascii = ch - 32;
        printf("%c\n", ascii);
    default:
        printf("Enter a valid character\n");
        break;
    }

    return 0;
}