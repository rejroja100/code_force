#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        char str[5];
        scanf("%s", str);

        int count = (str[0] - '0') + (str[2] - '0');

        printf("%d\n", count);
    }

    return 0;
}
