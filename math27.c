#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;

    if(a >= b)
    {
        for(int i = a; i >= b; i--)
            sum += i;
    }
    else
    {
        for(int i = a; i <= b; i++)
            sum += i;
    }

    printf("%d\n", sum);

    return 0;

}
