#include <stdio.h>

int main() {
    int x, y, z; // Andrew, Dmitry, Michal
    int a, b, c; // Green, Purple, Black

    scanf("%d %d %d", &x, &y, &z);
    scanf("%d %d %d", &a, &b, &c);

    // Check the conditions
    if (a >= x && (a + b) >= (x + y) && (a + b + c) >= (x + y + z)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
