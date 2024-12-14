#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        int a, b;
        scanf("%d%d", &a, &b);

        if(a == b) printf("%d\n", 2*a);
        else if(a == 0) printf("%d\n", 2*b-1);
        else if(b == 0) printf("%d\n", 2*a-1);
        else if(a == 0) printf("%d\n", 2*b-1);
        else if(a > b) printf("%d\n", 2*a-1);
        else printf("%d\n", 2*a+1);

    }

    return 0;
}

