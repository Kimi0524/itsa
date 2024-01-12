#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            if(i == 1)
                printf("%d", i);
            else
                printf(" %d", i);
        }

    }

    printf("\n");

    return 0;
}
