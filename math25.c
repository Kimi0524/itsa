#include <stdio.h>

int main()
{
    int n, sum;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
            sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
