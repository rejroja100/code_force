#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        int a, b, c, min = 0;
        scanf("%d%d%d", &a, &b, &c);

        if(a < b && a < c) min = a;
        else if(b < a && b < c) min = b;
        else min = c;

        int sum = a + b + c - min;

        if(sum >= 10) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}

