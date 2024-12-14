#include <stdio.h>

void solve() {
    int n, x;
    int ans = 1;

    scanf("%d %d", &n, &x);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            int z1 = (n / i);
            if (z1 >= x) {
                ans = (ans > 1) ? ans : 1;
            }
            if (i >= x) {
                ans = (ans > z1) ? ans : z1;
            }
        }
    }

    printf("%d\n", ans);
}

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        solve();
    }

    return 0;
}
