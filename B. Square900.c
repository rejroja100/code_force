#include<stdio.h>
#include<math.h>

int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);

        // Check if it's possible to form a square
        if ((a == c && b + d == sqrt(a * b + c * d)) ||
            (a == d && b + c == sqrt(a * b + c * d)) ||
            (b == c && a + d == sqrt(a * b + c * d)) ||
            (b == d && a + c == sqrt(a * b + c * d))) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
