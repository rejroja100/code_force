#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[n + 1];
        scanf("%s", s);

        int i = 0, res = 0;
        while (i < n) {
            if (s[i] == 'B') {
                res++;
                i += k;
            } else {
                i++;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
