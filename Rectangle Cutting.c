#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%s\n", ((a % 2 == 0 && 2 * b != a) || (b % 2 == 0 && 2 * a != b)) ? "YES" : "NO");
    }

    return 0;
}
