#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int num[2 * n], odd_count = 0;

        for (int i = 0; i < 2 * n; i++) {
            scanf("%d", &num[i]);
            if (num[i] % 2 != 0) {
                odd_count++;
            }
        }

        if (odd_count == n) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
