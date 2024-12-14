#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int num;
        scanf("%d", &num);

        if(num % 7 == 0) {
            printf("%d\n", num);
        }
        else {
            for(int i = num + 1; ; i += 1) {
                if(i % 7 == 0) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}
