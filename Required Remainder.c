#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y, n;
        scanf("%d%d%d", &x, &y, &n);

        // Find the maximum k satisfying the conditions
        int d = n - y;
        int max_k = (d / x) * x + y;

        printf("%d\n", max_k);
    }

    return 0;
}
