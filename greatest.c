//WAP to find greatest term among all four digit
#include <stdio.h>
void max(int a,int b, int c, int d);

int main() {
    int a=3, b=4, c=6, d=5;
    
    max(a, b,  c,  d);
    
    return 0;
}
void max(int a,int b, int c, int d)
{
    if (a>b&& a>c && a>d){
        printf("%d",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d",b);
    }
    else if (c>a && c>b && c>d){
        printf("%d",c);
    }
    else 
    printf("%d",d);
    
}
