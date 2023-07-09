//WACP to count total number of words in a string.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str, 100,stdin);
    int count=1;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
    }
    printf("Total number of words in the string is %d",count);
    return 0;
}