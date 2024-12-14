#include <stdio.h>

void generate_array(int n) {
    if (n % 2 == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
        for (int i = 1; i <= n/2; i += 1) {
            printf("%d %d ", i, -i);
        }
        printf("\n");
    }
}

int main() {

        int n;
        scanf("%d", &n);
        generate_array(n);


    return 0;
}

