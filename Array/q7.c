// Suppose there is president election in US and there are 2 candidates Trump and Biden.
// Input the votes of both the candidates in 10 states of US and calculate state-wise winner
// and over all winner
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the number of state:\n");
    scanf("%d", &size);
    int state_trump[size], state_biden[size],i = 1, overall_sumtrump = 0, overall_sumbiden = 0, state_sumbiden = 0, state_sumtrump = 0;
    while (i <= 10)
    {
        printf("Enter the votes of trump in state %d\n", i);
        scanf("%d",&state_trump[i]);
        overall_sumtrump += state_trump[i];
        printf("Enter the votes of biden in state %d\n", i);
        scanf("%d",&state_biden[i]);
        overall_sumbiden += state_biden[i];
        if (state_trump[i] > state_biden[i])
        {
            printf("Trump wins in state %d!!\n", i);
        }
        else if (state_trump[i] < state_biden[i])
        {
            printf("Biden wins in state %d!!\n", i);
        }
        else if (state_trump[i] == state_biden[i])
        {
            printf("Tieee in state %d!!\n", i);
        }
        i++;
    }
    if (overall_sumbiden > overall_sumtrump)
    {
        printf("Overall Biden Wins\n");
    }
    else if (overall_sumbiden < overall_sumtrump)
    {
        printf("Overall Trump Wins\n");
    }
    else if (overall_sumbiden == overall_sumtrump)
    {
        printf("No one wins both have same votes:-\n");
    }

    return 0;
}