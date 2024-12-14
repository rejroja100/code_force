#include <stdio.h>

int main() {
    long long int num, position, a;
    scanf("%d%d", &num, &position);

    if (num % 2 == 0) {
        num = num / 2;
        if (position > num) {
            a = position - num;
            printf("%d\n", 2 * a);
        } else {
            long long int a = position;
            printf("%d\n", 2 * a - 1);
        }
    } else {
        num = (num + 1) / 2;
        if (position > num) {
            a = position - num;
            printf("%d\n", 2 * a);
        } else {
            a = position;
            printf("%d\n", 2 * a - 1);
        }
    }

    return 0;
}
