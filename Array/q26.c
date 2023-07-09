// WAP to input an array of N number of elements.Traverse this array from starting to end,if element found is prime
// then convert it into palindrome number next to it and if its not prime(composite)then convert it into next
// Armstrong number.print the updated array.
#include <stdio.h>
#include<math.h>
int main()
{
    int size, flag = 1, sum = 0, temp, rem;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered elements of an array are:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 2; j < arr[i]; j++)
        {
            if ((arr[i] % j == 0))
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
            if (flag == 1)
            {
                if (arr[i] < 10)
                {
                    printf("%d", arr[i] + 1);
                }

                int n;
                int temp = n = arr[i];
                while (n > 0)
                {
                    int rem = n % 10;
                    sum = (sum * 10) + rem;
                    n = n / 10;
                }
                if (temp == sum)
                {
                    arr[i] = sum;
                    break;
                }
                else
                    arr[i]++;
            }
            int n,count_digit=0;
            while (n>0)
            {
                n=arr[i];
                n=n/10;
                count_digit++;
            }
            if (flag != 1)
            {
                while (n>0)
                {
                temp=n=arr[i];
                rem=n%10;
                sum=sum+pow(rem,count_digit);
                n=n/10;
                }
                if (temp==sum)
                {
                    arr[i]=sum;
                    break;
                }else
                arr[i]++;
            }
        }
    }
    printf("\nUpdated array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}