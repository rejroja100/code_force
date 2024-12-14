#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int k;
        scanf("%d", &k);
        int x, y, num1[k], num2[k];

        for (int i = 0; i < k; i++) {
            scanf("%d%d", &x, &y);
            num1[i] = x;
            num2[i] = y;
        }

        bubbleSort(num1, k);
        bubbleSort(num2, k);

        if (num1[0] < 0 && num1[k - 1] > 0 && num2[0] < 0 && num2[k - 1] > 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
