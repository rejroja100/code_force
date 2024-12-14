#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char a[100], b[100], c[100];
        scanf("%s%s%s", a, b, c);

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != c[i] && b[i] != c[i]) {
                ans = 1;
                break;
            }
        }

        if (ans == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
