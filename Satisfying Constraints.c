#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        int i, j, a, b, n, min = -1, count = 0, num[100] = {0};
        long long int max = 10000000000000000;
        scanf("%d", &n);

        for(i = 0; i < n; i++){
            scanf("%d%d", &a, &b);

            if(a == 1){
                if(b > min) min = b;
            }
            else if(a == 2){
                if(b < max) max = b;
            }
            else if(a == 3){
                num[i] = b;
            }
        }

        int total = max - min + 1;

        for(j = 0; j < i+1; j++){
            if(num[j] >= min && num[j] <= max) count++;
        }

        total = total - count;

        if(total > 0) printf("%d\n", total);
        else printf("0\n");
    }

    return 0;
}

