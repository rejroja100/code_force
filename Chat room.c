#include <stdio.h>

int main() {
    char str[102];
    scanf("%s", str);

    int index = 0;
    char hello[] = "hello";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == hello[index]) {
            index++;
        }
    }

    if (index == 5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
