#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
        num = ~num;
        num = num + 1;
    }

    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}
