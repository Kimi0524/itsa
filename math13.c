#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, t, sum;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    t = 60 * (h2 - h1) + (m2 - m1);

    if(t >= 30 && t <= 120)
        sum = (t / 30) * 30;
    else if(t > 120 && t <= 240)
        sum = ((t - 120) / 30) * 40 + 120;
    else if(t > 240)
        sum = ((t - 240) / 30) * 60 + 280;

    printf("%d\n", sum);

    return 0;
}
