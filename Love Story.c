#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[11]; // Change size to 11 to accommodate the null terminator
        int i, count = 0;
        scanf("%s", str);

        char love[] = "codeforces";

        for (i = 0; i < 10; i++) {
            if (str[i] != love[i]) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
