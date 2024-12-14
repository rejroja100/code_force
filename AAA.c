#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();  // consume newline after t

    while (t--) {
        int n;
        scanf("%d", &n);

        char log[501];
        scanf("%s", log);

        int totalTime = 0;
        int solvedProblems = 0;

        for (int i = 0; i < n; i++) {
            totalTime += log[i] - 'A' + 1;

            // Check if Monocarp has spent enough time on the current problem
            if (totalTime > (i + 1) * 11) {
                break;  // Stop iterating once Monocarp cannot solve more problems
            }

            if (i == n - 1 || log[i] != log[i + 1]) {
                solvedProblems++;
            }
        }

        printf("%d\n", solvedProblems);
    }

    return 0;
}
