// WAP to  input an array of N number of elements.Input E no.of elements you want to insert in that array along 
// with their positions  and insert all of them.Print the final array after insertion of all elements.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size+1];
    printf("Enter the elements of an array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered elements of an array:-");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    int num,i=0;
    printf("\nHow many number you want to insert:-\n");
    scanf("%d",&num);
    int n,pos;
    while(i<num){
    printf("\nEnter the number which you want to insert:\n");
    scanf("%d",&n);
    printf("Enter the posoition on which you want to insert:\n");
    scanf("%d",&pos);
    // int arr[size+1];
   
    for (int i = size; i >= pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
        arr[pos-1]=n;
    printf("Array after inserting an element:-\n");
    for (int i = 0; i < size+1; i++)
    {
        printf("%d ,",arr[i]);
    }
    i++;
    }
    return 0;
}