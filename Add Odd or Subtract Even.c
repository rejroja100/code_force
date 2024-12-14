#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int diff = abs(a - b);

        if (diff == 0) {
            printf("0\n"); // No moves needed if a and b are already equal.
        } else if (diff % 2 == 0) {
            printf("1\n"); // One move needed for even difference.
        } else {
            printf("2\n"); // Two moves needed for odd difference.
        }
    }

    return 0;
}
