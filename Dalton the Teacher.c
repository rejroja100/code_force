#include <stdio.h>

int main() {

        int a; scanf("%d", &a);

            while(a--){


                int n; scanf("%d", &n);
                int num[n], count = 0;

                for(int i = 1; i <= n; i++){

                    scanf("%d", &num[i]);
                    if(i == num[i]) count++;
                }

                if(count % 2 != 0) count++;

                printf("%d\n", count/2);

            }


    return 0;
}


