#include <stdio.h>

unsigned long long int  fac(int n)
{
    if(n == 1)
        return 1;
    else if(n > 1)
        return fac(n - 1) * n;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%llu\n", fac(n));

    return 0;
}
