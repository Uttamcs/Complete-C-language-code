//WAP to print fibonacii series till n terms

#include<stdio.h>
void fib(int n);
int main()
{   
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d,%d,",0,1);
    fib(n-2);
    return 0;
}
void fib(int n)
{ 
    if (n>0)
    {
    static int t1=0,t2=1,t3;
   t3=t1+t2;
   t1=t2;
   t2=t3;
   printf("%d,",t3);
   fib(n-1);
    }
}