#include <stdio.h>
#include <math.h>

int main()
{
    int mi;
    scanf("%d", &mi);
    double km = mi * 1.6;


    printf("%.1f\n", round(km * 10) / 10.0);

    return 0;
}
