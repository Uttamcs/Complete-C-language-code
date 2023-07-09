// Write a C program to input any character and check whether it is alphabet,digit,or special character
#include<stdio.h>
int main()
{
    char a;
    printf("Enter character/alphabet/digit/special character:\n");
    scanf("%c",&a);
    if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
    printf("%c is Alphabet",a);
    }
    else if (a>='0' && a<='9')
    {
    printf("%c is digit",a);
    }
    else
    printf("%c is Special character",a);
    

    return 0;
}