//WACP to check whether string is pallindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char oldstr[100];
    char str[100];
    int flag=1;
    int count=0;
    printf("Enter the string:\n");
    gets(oldstr);
    int k=0;
    for (int i = 0; i < oldstr[i]!='\0'; i++)
    {
        if (oldstr[i]!=' ')
        {
            str[k]=oldstr[i];
            k++;
        }
        str[k]='\0';
    }
    for (int i = 0; str[i]!='\0'; i++) {
      if(str[i] >= 'A' && str[i] <= 'Z') {
         str[i] = str[i] + 32;
      }
   }
    for (int  i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    char newstr[count];
    for (int i = 0; i<count; i++)
    {
        newstr[i]=str[i];
    }
    for (int i = 0; i<count/2; i++)
    {
        if (str[i]!=str[count-i-1])
        {
            flag=0;
            break;
        }
    }
    if (flag==0)
    {
        printf("%s is not a pallindrome string\n",oldstr);
    }
    else
        printf("%s is a pallindrome string\n",oldstr);
    return 0;
}

