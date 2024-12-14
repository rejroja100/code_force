#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[n * k + 1];  // +1 for null terminator
        int index = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                s[index] = 'a' + j;
                index++;
            }
        }

        s[index] = '\0';  // Null-terminate the string
        printf("%s\n", s);
    }

    return 0;
}
