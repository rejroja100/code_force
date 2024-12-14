#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int l = 1, r = n;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                printf("%d ", l++);
            } else {
                printf("%d ", r--);
            }
        }

        printf("\n");
    }

    return 0;
}
