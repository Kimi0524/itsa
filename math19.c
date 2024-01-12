#include <stdio.h>

int main()
{
    int min;
    double toll = 0;
    scanf("%d", &min);

    if(min <= 800)
        toll = min * 0.9;
    else if(min > 800 && min < 1500)
        toll = (min * 0.9) * 0.9;
    else if(min >= 1500)
        toll = (min * 0.9) * 0.79;

    printf("%.1lf\n", toll);

    return 0;

}
