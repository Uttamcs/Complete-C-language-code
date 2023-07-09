//WACP to search all occurence of a charcter in a given string
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
    int occurence_count=0,k=0;
    int arr[occurence_count];
    for (i=count; i >= 0 ; i--)
    {
        if (str[i]==ch)
        {
            occurence_count++;
            pos=count-i-1;
            arr[k]=pos;
            k++;
        }
        
    }
    printf("%c is at position ",ch);
    for (int i = 0; i < occurence_count; i++)
    {
        printf("%d,",arr[i]);
    } 
    printf("from last of string");
    
    return 0;
}