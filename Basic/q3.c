// Write a program to find the size of data types in C
#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    printf("size of integer is %d\nsize of float is %d\nsize of character is %d",sizeof(a),sizeof(b),sizeof(ch));
    return 0;
}