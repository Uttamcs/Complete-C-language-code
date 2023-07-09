//WACP to find length of string with function and without function
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
    printf("Size of the string is %d",count);
    return 0;
}