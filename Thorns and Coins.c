#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar(); // consume the newline after t

    while (t--) {
        int n;
        scanf("%d", &n);
        getchar(); // consume the newline after n

        char s[100]; // add 1 for the null terminator
        fgets(s, sizeof(s), stdin);

        int count = 0;

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '@') count++;
            if (s[i] == '*' && s[i + 1] == '*') break;
        }

        printf("%d\n", count);
    }

    return 0;
}
