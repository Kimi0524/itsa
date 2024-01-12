#include <stdio.h>

int main()
{
    int N, sum;
    scanf("%d", &N);
    for(int i = 1; i < N; i++)
    {
        sum = 0;

        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
                sum += j;
        }
        if(sum == i)
        {
            if(i == 6)
                printf("%d", i);
            else
                printf(" %d", i);
        }
    }

    printf("\n");

    return 0;
}
