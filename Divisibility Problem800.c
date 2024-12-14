#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, count = 0;
        scanf("%d%d", &a, &b);

        while (a % b != 0) {
            count++;
            a++;
        }

        printf("%d\n", count);
    }

    return 0;
}
