#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 1; i < n - 1; i++) {
            if (a[i - 1] <= a[i + 1] && a[i] >= 2 * a[i - 1]) {
                a[i + 1] -= a[i - 1];
                a[i] -= 2 * a[i - 1];
                a[i - 1] = 0;
            }
        }

        int is_all_zero = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                is_all_zero = 0;
                break;
            }
        }

        // Calculate and print the result
        printf("%s\n", (is_all_zero) ? "YES" : "NO");
    }

    return 0;
}
