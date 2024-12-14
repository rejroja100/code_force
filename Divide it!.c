#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        long long n;
        scanf("%lld", &n);

        int moves = 0;

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else if (n % 3 == 0) {
                n = 2 * n / 3;
            } else if (n % 5 == 0) {
                n = 4 * n / 5;
            } else {
                moves = -1;
                break;
            }

            moves++;
        }

        printf("%d\n", moves);
    }

    return 0;
}
