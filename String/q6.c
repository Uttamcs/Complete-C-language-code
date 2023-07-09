//WACP to convert uppercase string to lowercase.
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    for (int i = 0; str[i]!='\0'; i++) {
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] - 32;
      }
    }
    puts(str);
    return 0;
}