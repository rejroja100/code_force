#include <stdio.h>

int main() {

    int a, b, c, sum = 0;
    scanf("%d%d%d", &a, &b, &c);

        while(c--){

            sum += ((a*2) + (b-2)*2);

            a -= 4;
            b -= 4;

        }

    printf("%d\n", sum);

    return 0;
}

