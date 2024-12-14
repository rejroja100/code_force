#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        int n;
        scanf("%d", &n);

        char log[501];
        scanf(" %s", log);

        int Time = 0;
        int count = 0;
        int flag = 0;

        for (int i = 0; i < n; i++) {
            Time += log[i] - 'A' + 1;

            if(Time > n){
                 flag = 1;
                 break;
            }

            if(log[i] != log[i+1]) count++;

        }

        if(flag == 1) printf("%d\n", count);


    }

    return 0;
}
