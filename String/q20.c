//WACP to find lowest frequency character in a string.
#include<stdio.h>
int main(){
    char str[100],min_ch;
    printf("Enter the string:\n");
    fgets(str, 100,stdin);
    int count=0;
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
    int min=freq[str[0]];
    for (int i = 0; i < count-1; i++)
    {
       if (min>freq[str[i]])
       {
            min=freq[str[i]];
            min_ch=str[i];
        }
    }
    printf("Minimum occuring character in the string is '%c' it occurs %d times ",min_ch,min);
    return 0;
}