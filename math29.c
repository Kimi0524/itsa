#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num, max;
    scanf("%d", &num);

    for(int i = num - 1; i > 1; i--)
    {
        if(isPrime(i))
        {
            max = i;
            break;
        }
    }

    printf("%d\n", max);


    return 0;
}
