// Write a program to Demonstrate global and internal variables
#include<stdio.h>
int a=7,b=9;
int main()
{
int a=5;
printf("%d\n",a);  //if local variable is present then local variable has higher precedence than global variable
printf("%d",b);  // here value of b is assigned from global variable 
return 0;
}
