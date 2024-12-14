#include <stdio.h>

void solve() {
    int t;
    scanf("%d", &t);

    for (int testcase = 0; testcase < t; ++testcase) {
        int n, k, m;
        scanf("%d %d %d", &n, &k, &m);

        char s[m + 1];
        scanf("%s", s);

        // Check if all possible strings of length n occur as a subsequence of s
        char possible_subsequences[m - n + 2][n + 1];
        for (int i = 0; i <= m - n; ++i) {
            strncpy(possible_subsequences[i], s + i, n);
            possible_subsequences[i][n] = '\0';
        }

        char all_subsequences[k * k][3];
        int subseq_count = 0;
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < k; ++j) {
                all_subsequences[subseq_count][0] = 'a' + i;
                all_subsequences[subseq_count][1] = 'a' + j;
                all_subsequences[subseq_count][2] = '\0';
                subseq_count++;
            }
        }

        int all_found = 1;
        for (int i = 0; i < subseq_count; ++i) {
            int found = 0;
            for (int j = 0; j <= m - n; ++j) {
                if (strcmp(all_subsequences[i], possible_subsequences[j]) == 0) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                all_found = 0;
                break;
            }
        }

        if (all_found) {
            printf("YES\n");
        } else {
            printf("NO\n");
            // Find a string of length n that does not occur as a subsequence of s
            for (int i = 0; i < subseq_count; ++i) {
                int found = 0;
                for (int j = 0; j <= m - n; ++j) {
                    if (strcmp(all_subsequences[i], possible_subsequences[j]) == 0) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("%s\n", all_subsequences[i]);
                    break;
                }
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
