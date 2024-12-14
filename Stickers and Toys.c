#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, s, k;
        scanf("%d %d %d", &n, &s, &k);
        printf("%d\n", n - ((s < k) ? s : k) + 1);
    }

    return 0;
}
