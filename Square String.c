#include <stdio.h>
#include <string.h>

int is_square(char str[]) {
    int len = strlen(str);

    // Check if the length is even
    if (len % 2 != 0) {
        return 0; // Not a square
    }

    int k = len / 2;

    // Check if the first half is the same as the second half
    for (int i = 0, j = k; i < k; i++, j++) {
        if (str[i] != str[j]) {
            return 0; // Not a square
        }
    }

    return 1; // It's a square
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[102];
        scanf("%s", str);

        if (is_square(str)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
