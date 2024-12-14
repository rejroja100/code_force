#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int v = a + b + c;
    int w = a + b * c;
    int x = a * (b + c);
    int y = a * b * c;
    int z = (a + b) * c;

    int max = v;

    if (w > max)
        max = w;
    if (x > max)
        max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;

    printf("%d\n", max);

    return 0;
}
