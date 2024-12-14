#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q); // Input number of test cases

    while (q--) {
        int n, m;
        scanf("%d %d", &n, &m); // Input the size of the array (n) and the number of queries (m)

        int A[n], B[n + 1], C[n + 1];
        B[0] = C[0] = 0;

        for (int i = 0; i < n; ++i) {
            scanf("%d", &A[i]);
            B[i + 1] = B[i] + (A[i] == 1);
            C[i + 1] = C[i] + A[i];
        }
        // Input array A, and compute arrays B and C based on the conditions in the queries.

        while (m--) {
            int l, r;
            scanf("%d %d", &l, &r);
            --l; // Input query range [l, r), adjust to 0-based indexing

            // Check the condition and print "NO" or "YES" based on the result
            printf("%s\n", (l + 1 == r || C[r] - C[l] < r - l + B[r] - B[l]) ? "NO" : "YES");
        }
    }

    return 0;
}
