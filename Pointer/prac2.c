/*
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("enter the number of a and b:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swapping a and b\na=%d\nb=%d",a,b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
#include<stdio.h>
void main()
{
char s[30]="HELLO TO GLA UNIVERSITY";
printf("%c\n",s+2);
printf("%c\n",*(s+3));
printf("%s\n",s+2);
printf("%d\n",s+4);
printf("%d\n",*(s+4));
printf("%s\n",s+4);
printf("%s\n",*(s+4));
}
#include<stdio.h>
int main()
{
    char str[1000];
    char *ptr;
    printf("Enter the string:\n");
    gets(str);
    ptr=str;
    printf("Entered string is\n");
    while (*ptr !='\0')
    {
        printf("%c",*ptr++);
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered array is:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] != -1)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        if (arr[i] != -1)
        {
            printf("\n%d occurs %d times in an array\n ", arr[i], count);
        }
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "hii uttam";

	printf("The given string is =%s\n", str);

	printf("After reversing string is =%s", strrev(str));

	return 0;
}

*/