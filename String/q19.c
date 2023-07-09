//WACP to find highest frequency character in a string
#include<stdio.h>
int main(){
    char str[100],max_ch;
    printf("Enter the string:\n");
    fgets(str, 100,stdin);
    int count=0,max=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    // freq ki size 122 isliye hai ki z ka ascii value 122 hota hai
    int freq[122]={0};
    for (int i = 0; i < count; i++)
    {
        freq[str[i]]++;
    }
    for (int i = 0; i < count; i++)
    {
       if (max<=freq[str[i]])
       {
            max=freq[str[i]];
            max_ch=str[i];
        }
    }
    printf("Maximum occuring character in the string is '%c' it occurs %d times ",max_ch, max);
    return 0;
}