#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int r, b, d, max, min;
        scanf("%d%d%d", &r, &b, &d);

        if (r > b) {
            max = r;
            min = b;
        } else {
            max =  b;
            min = r;
        }

        // Check if the minimum number of packets is sufficient
        int packetsNeeded = (max + min - 1) / min;  // ceil((max + min) / min)
        if (packetsNeeded <= d + 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
