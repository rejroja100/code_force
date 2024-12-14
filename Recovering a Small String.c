#include <stdio.h>
#include <stdlib.h>

char* smallest_word(int encoded_sum) {
    for (int i = 1; i <= 26; i++) {
        for (int j = 1; j <= 26; j++) {
            for (int k = 1; k <= 26; k++) {
                if (i + j + k == encoded_sum) {
                    char* result = (char*)malloc(4);
                    result[0] = i + 96;
                    result[1] = j + 96;
                    result[2] = k + 96;
                    result[3] = '\0';
                    return result;
                }
            }
        }
    }
    return NULL;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        char* result = smallest_word(n);
        printf("%s\n", result);
        free(result);  // Don't forget to free the allocated memory
    }

    return 0;
}
