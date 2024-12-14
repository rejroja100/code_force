#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int n, k;
        scanf("%lld %lld", &n, &k);

        long long int num[n];
        long long int sum = 1;
        for(int i = 0; i < n; i++){
            scanf("%lld", &num[i]);
            sum *= num[i];
        }

     long long int temp = 2023 / sum;

        if(temp*sum == 2023){
            printf("YES\n");
            printf("%lld ", temp);

            for(int i = 0; i < k -1; i++){
                printf("1 ");
            }
            printf("\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}

