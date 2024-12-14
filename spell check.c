#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[11];
        scanf("%s", s);

        // Check if the length is not equal to 5, print NO
        if (n != 5) {
            printf("NO\n");
            continue;
        }

        // Check if the string contains the required letters
        int countUppercase[26] = {0};  // Array to store counts of uppercase letters
        int countLowercase[26] = {0};  // Array to store counts of lowercase letters

        for (int i = 0; i < n; i++) {
            // Increment count for each letter
            if ('A' <= s[i] && s[i] <= 'Z') {
                countUppercase[s[i] - 'A']++;
            } else {
                countLowercase[s[i] - 'a']++;
            }
        }

        // Check if the counts are as expected
        if (countUppercase['T' - 'A'] >= 1 && countLowercase['i' - 'a'] >= 1 &&
            countLowercase['m' - 'a'] >= 1 && countLowercase['u' - 'a'] >= 1 &&
            countLowercase['r' - 'a'] >= 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

