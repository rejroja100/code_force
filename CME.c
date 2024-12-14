#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if(n == 2) printf("%d\n", 2);
        else if(n % 2 == 0) printf("%d\n", 0);
        else printf("%d\n", 1);
    }

    return 0;
}


