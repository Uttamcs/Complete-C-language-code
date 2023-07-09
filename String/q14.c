//WACP to reverse order of words in a given string
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str, 100,stdin);
    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    int i;
    for (str[i]!='\0'; i > 0; i--)
    {
        /* code */
    }
    
    printf("Size of the string is %d",count);
    return 0;
}