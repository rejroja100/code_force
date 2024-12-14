#include <stdio.h>
#include <string.h>

int main() {
    char str[102];

    // Use fgets to read the entire line
    fgets(str, sizeof(str), stdin);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            count++;
    }

    if (count > 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
