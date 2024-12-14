#include <stdio.h>

int is_disliked(int x) {
    return (x % 3 == 0) || (x % 10 == 3);
}

int find_kth_element(int k) {
    int count = 0;
    int x = 0;

    while (count < k) {
        x++;
        if (!is_disliked(x)) {
            count++;
        }
    }

    return x;
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int k;
        scanf("%d", &k);

        int result = find_kth_element(k);
        printf("%d\n", result);
    }

    return 0;
}
