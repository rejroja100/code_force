#include<stdio.h>

int disit_sum(int x){
    int total = 0;

    while(x){
        total += x % 10;
        x = x/10;
    }

    return total;
}
int main()
{
    int t; scanf("%d", &t);

    while(t--){
        int x, k; scanf("%d%d", &x, &k);

        if(disit_sum(x) % k == 0) printf("%d\n", x);
        else{

            while(x++){
                if(disit_sum(x) % k == 0){
                    int result = x;
                    printf("%d\n", result);
                    break;
                }
            }
        }
    }

    return 0;
}
