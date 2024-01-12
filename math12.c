#include <stdio.h>
#include <math.h>

int main()
{
    int dis;
    scanf("%d", &dis);
    float t = dis / (1 - 30 * 0.0254);
    printf("%d\n", (int)ceil(t));

    return 0;
}
