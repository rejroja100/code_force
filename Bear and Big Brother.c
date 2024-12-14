#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int years = 0;

    while (a <= b) {
        a *= 3;  // Limak's weight triples every year
        b *= 2;  // Bob's weight doubles every year
        years++;
    }

    printf("%d\n", years);

    return 0;
}
