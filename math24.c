#include <stdio.h>

int main()
{
    int hour, salary;
    double sum = 0;

    scanf("%d %d", &hour, &salary);

    if(hour <= 60)
        sum = hour * salary;
    if(hour > 60 && hour <= 120)
        sum = 60 * salary + (hour - 60) * salary * 1.33;
    else if(hour > 120)
        sum = 60 * salary * 2.33 + (hour - 120) * salary * 1.66;

    printf("%.1lf\n", sum);

    return 0;
}
