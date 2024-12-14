#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int odd_count = 0, even_count = 0;
        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);

            if (num % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        // The minimum number of elements to remove is the minimum of odd_count and even_count
        // If both odd_count and even_count are zero, it means every consecutive pair already has an even sum
        // If either odd_count or even_count is zero, it means every consecutive pair already has an odd sum
        // In both these cases, we don't need to remove any elements
        int min_remove = (odd_count > 0 && even_count > 0) ? (odd_count < even_count ? odd_count : even_count) : 0;

        printf("%d\n", min_remove);
    }

    return 0;
}

