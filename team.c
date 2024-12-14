#include <stdio.h>

int main() {
    int t, temp = 0, count = 0, num[3];
    scanf("%d", &t);

    int x = t;

    while (t--){
        for (int i = 0; i < 3; i++) {
            scanf("%d", &num[i]);
        }

        for (int j = 0; j < 3; j++) {
            if (num[j] == 1) {
                count++;
            }
        }

        if (count >= 2) {
            temp++;
        }

        count = 0; // Reset count for the next iteration
    }

    printf("%d\n", temp);

    return 0;
}
