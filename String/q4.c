//WACP to compare two strings with and without function
#include<stdio.h>
int main(){
    char str[100], _str[100];
    printf("Enter first string:\n");
    fgets(str, 100, stdin);
    printf("Enter second string:\n");
    fgets(_str, 100, stdin);
    int count = 0, _count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; _str[i] != '\0'; i++)
    {
        _count++;
    }
    int n=count+_count,comp;
    for (int i = 0; i < n-1; i++)
    {
        if (str[i]==_str[i])
        {
            continue;
        }
        else
        {
            if (str[i]!=_str[i])
            {
                comp=str[i]-_str[i];
                break;
            }
            
        }
        
    }
    printf("Comparison between string 1 and string 2 is %d",comp);
    return 0;
}