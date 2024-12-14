#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        // Maximum stability is achieved by having all vertical bricks in one row
        // and the rest of the rows filled with horizontal bricks
        printf("%d\n", (m / 2) * n);
    }

    return 0;
}
