#include<stdio.h>

int main() {

        int a, k;
        scanf("%d%d", &a, &k);

            for(int i = 0; i < k; i++){

                if(a % 10 == 0){
                    a = a / 10;
                }
                else{
                    a--;
                }
            }

        printf("%d\n", a);

    return 0;
}

