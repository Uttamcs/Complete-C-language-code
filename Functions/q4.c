#include<stdio.h>
void chk_num(int);

int main(){
    int num;
    printf("Enter any number:\n");
    scanf("%d",&num);
    chk_num(num);
    return 0;
}
void chk_num(int num)
{
    if (num%2==0)
    {
        printf("Even number");
    }
    else
        printf("Odd number");
}