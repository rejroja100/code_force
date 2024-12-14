#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        int n;
        scanf("%d", &n);

        // Counting the number of digits in n
        int numDigits = 0;
        int temp = n;
        while (temp > 0) {
            temp /= 10;
            numDigits++;
        }

        // Calculating the result based on the pattern "111...111"
        long long result = (numDigits - 1) * 9 + n / (1LL * 111111111);
        printf("%lld\n", result);
    }

    return 0;
}
