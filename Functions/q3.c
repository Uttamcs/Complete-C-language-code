#include<stdio.h>
void min_max(int, int);
int main()
{
    int num1,num2;
    printf("Enter the number:\n");
    scanf("%d",&num1);
    printf("Enter the number:\n");
    scanf("%d",&num2);
    min_max(num1, num2);
    return 0;
}
void min_max(int num1, int num2)
{
    int max,min;
    if (num1>num2)
    {
       max=num1; 
       min=num2;
       printf("\nMax=%d\nMin=%d",max,min);
    }
    else
       max=num2; 
       min=num1;
       printf("\nMax=%d\nMin=%d",max,min);
}