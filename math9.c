#include <stdio.h>

int main()
{
    int i;
    unsigned long long result = 1;
    scanf("%d", &i);
    if(i > 31)
        printf("Value of more than 31\n");
    else
    {
        result = result << i;
        printf("%llu\n", result);
    }

    return 0;
}
