#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar(); // Consume the newline character after reading t

    while (t--) {
        char str[8][8];
        char str2[9] = {0}; // Initialize the array to avoid undefined behavior
        int k = 0;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                scanf(" %c", &str[i][j]); // Add a space before %c to skip whitespace characters

                if (str[i][j] != '.') {
                    str2[k] = str[i][j];
                    k++;
                }
            }
        }

        str2[k] = '\0';
        printf("%s\n", str2);
    }

    return 0;
}
