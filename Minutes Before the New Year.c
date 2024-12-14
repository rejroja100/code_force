#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        int a, b;
        scanf("%d%d", &a, &b);

        int  time = 1440 - (60*a + b);



        printf("%d\n", time);
    }

    return 0;
}
