#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    char ch;
    int count = 0;
    ch = fgetc(fptr);

    while (ch != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
        else
            printf("Check txt file\n");
    }
    fclose(fptr);
    printf("Total vowels are %d\n", count);
    

    return 0;
}
