#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);

        if (a == c && b == d) {
            // If the segments coincide
            printf("%d %d\n", b, a);
        } else if (a < c && d < b) {
            // If the second segment is completely inside the first
            printf("%d %d\n", a, c);
        } else if (a > c && b > d) {
            // If the first segment is completely inside the second
            printf("%d %d\n", c, a);
        } else if (a < c && b < d) {
            // If the segments intersect but do not completely overlap
            printf("%d %d\n", a, d);
        } else {
            // If the segments intersect but do not completely overlap (alternate case)
            printf("%d %d\n", c, b);
        }
    }

    return 0;
}
