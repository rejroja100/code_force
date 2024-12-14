#include <stdio.h>

int main() {

    int n, sum = 0, sum1 = 0, sum2 = 0; scanf("%d", &n);

    while(n--){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        sum += a;
        sum1 += b;
        sum2 += c;
    }

        if(sum == 0 && sum1 == 0 && sum2 ==0) printf("YES\n");
        else printf("NO\n");

    return 0;
}

