#include<stdio.h>
int main()
{
    char ch;
    for (int i = 1; i <=5; i++)
    {       ch='A';
            for (int j = 1; j<=(5-i); j++)
            {
                printf("%c",ch);
                ch++;
            }
            printf("\n");
    }
    


    return 0;
}