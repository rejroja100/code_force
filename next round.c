#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int kth_place_score = scores[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] > 0 && scores[i] >= kth_place_score) {
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}

