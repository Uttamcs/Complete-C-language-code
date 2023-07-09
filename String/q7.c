//WACP to toggle case of each characer of a string.
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    for (int i = 0; str[i]!='\0'; i++) {
      if((str[i] >= 'a' && str[i] <= 'z') ||(str[i] >= 'A' && str[i] <= 'Z')){
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;
        }
      }
    }printf("String after toggling:\n");
        puts(str);
        
    return 0;
}