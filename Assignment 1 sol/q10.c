//Write a c program to convert days into yeras, month,week
#include<stdio.h>
int main(){
    int d,y,m,w;
    printf("Enter number of days:");
    scanf("%d",&d);
    y=d/365;
    m=(d%365)/30;
    w=((d%365)%30)/7;
    d=d%7;
    printf("%d years %d months %d week and %d day :",y,m,w,d);

    return 0;
    }