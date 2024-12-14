#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    while(n--){

        int n, k;
        scanf("%d%d", &n, &k);

        int result = n / k;

        if(result == k) printf("%d\n", result - 1);
        else printf("%d\n", result);
    }

    return 0;
}

