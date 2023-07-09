//WAP to print fibonacii series till n terms

#include<stdio.h>
void printfibonaci(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("%d\t%d\t",0,1);
    printfibonaci(n-2);
    return 0;
}
void printfibonaci(int n){
   static int n1=0, n2=1, n3;
   if (n>0){
   n3=n1+n2;
   n1=n2;
   n2=n3;
   printf("%d\t",n3);
   printfibonaci(n-1);
}
}