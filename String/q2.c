//WACP to copy one string from another string with using function and without function
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:\n");
    fgets(str,100,stdin);
    printf("Entered string is:-\n");
    fputs(str,stdout);
    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    char newstr[count];
    int k=0;
    for (int i = 0; i < count; i++)
    {
        newstr[i]=str[i];
        k=i;
    }
    newstr[k]='\0';
    printf("New string is:-\n");
    fputs(newstr,stdout);
    return 0;
}