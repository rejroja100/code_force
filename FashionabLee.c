#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n < 4 || n % 2 != 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}
