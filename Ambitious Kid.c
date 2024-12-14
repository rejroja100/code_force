#include <stdio.h>

int main() {

        int a; scanf("%d", &a);
            int num[a];
            long long int min = 90000000000;


            for(int i = 0; i < a; i++){
                scanf("%d", &num[i]);
                if(num[i] < 0) {
                    num[i] = abs(num[i]);
                }

                if(num[i] < min) min = num[i];
            }

        printf("%d\n", min);

    return 0;
}

