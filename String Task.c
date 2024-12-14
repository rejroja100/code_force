#include<stdio.h>

char capital_small(char x) {
    return x + 32;
}

char small(char x) {
    return x;
}

int is_vowel(char x) {
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
            x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
}

int main() {
    char x[105];
    scanf("%s", x);

    for (int i = 0; x[i] != '\0'; i++) {
        if (is_vowel(x[i])) {
            // Skip vowels
        } else if (x[i] >= 'A' && x[i] <= 'Z') {
            printf(".%c", capital_small(x[i]));
        } else if (x[i] >= 'a' && x[i] <= 'z') {
            printf(".%c", small(x[i]));
        }
    }

    return 0;
}
