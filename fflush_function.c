#include <stdio.h>

int main() {
    int n;
    char ch;
    printf("Enter the integer:");
    scanf("%d",&n);
    printf("Enter the character:");
    fflush(stdin);
    scanf("%c",&ch);
    printf("Entered integer is:%d",n);
    printf("\nEntered character is: %c",ch);
    
    return 0;
}











