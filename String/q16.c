//WACp to find last occurence of a character in a given string
#include<stdio.h>
int main(){
    char str[100],ch;
    printf("Enter the string:\n");
    fgets(str, 100,stdin);
    int count=0,i,pos;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("Enter the character which you want to check:\n");
    scanf("%c",&ch);
    for (i=count; i >= 0 ; i--)
    {
        if (str[i]==ch)
        {
            pos=i+1;
            break;
        }
        
    }
    printf("%c is at position %d  in the string from last ",ch,(count-pos));
    return 0;
}