#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);

    while (test--) {
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        int count1 = 0, count2 = 0;

        int num1[n], num2[m];

        for (int i = 0; i < n; i++) {
            scanf("%d", &num1[i]);
            if (num1[i] <= k) count1++;
        }

        for (int j = 0; j < m; j++) {
            scanf("%d", &num2[j]);
            if (num2[j] <= k) count2++;
        }

        int flag = 0;

        if (count1 >= k / 2 && count2 >= k / 2) flag = 1;

        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
