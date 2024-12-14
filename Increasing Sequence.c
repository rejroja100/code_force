#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        int b = 1;
        for (int j = 0; j < n; j++) {
            if (b == a[j]) {
                b += 1;
            }
            b += 1;
            printf("%d\n", b - 1);
        }

        printf("\n\n\n%d\n", b - 1);
    }

    return 0;
}
