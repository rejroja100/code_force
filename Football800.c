#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);

    int danger = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1; // Initialize count to 1 for the current player

        // Check for consecutive players of the same team
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // If there are at least seven consecutive players, set danger to 1 and break
        if (count >= 7) {
            danger = 1;
            break;
        }
    }

    if (danger == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
