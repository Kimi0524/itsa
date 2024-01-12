#include <stdio.h>

int main()
{
    int a, b, c;
    double area;

    scanf("%d %d %d", &a, &b, &c);

    area = ((a + b) * c) / 2.0;
    printf("Trapezoid area:%.1f\n", area);

    return 0;
}
