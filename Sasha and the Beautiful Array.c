#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int num[n];

        for (int i = 0; i < n; i++) scanf("%d", &num[i]);

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = 0;

                if (num[j] < num[i]) {
                    temp = num[j];
                    num[j] = num[i];
                    num[i] = temp;
                }
            }
        }


        int sum = 0;

        for (int i = 1; i < n; i++){
            sum += (num[i] - num[i-1]);
        }

        printf("%d\n", sum)
    }

    return 0;
}
