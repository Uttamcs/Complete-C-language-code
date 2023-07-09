//WACP to reverse of a string with function and without function.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str, 100,stdin);
    int count=0;
    for (int  i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    int k;
    for (int i = 0; i<count/2; i++)
    {
        int temp=str[i];
        str[i]=str[count-i-1];
        str[count-i-1]=temp;
        k=i;
    }
    puts(str);
    return 0;
}