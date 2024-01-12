#include <stdio.h>
#include <math.h>

int main()
{
    float C, F;
    scanf("%f", &C);
    F = C * 1.8 + 32;

    printf("%.1f\n", round(F * 10) / 10.0);

    return 0;
}
