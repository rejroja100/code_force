#include<stdio.h>
int odd(int x){
    if(x % 2 != 0) return 1;
    else return 0;
}
int main()
{
    int test; scanf("%d", &test);

    while(test--){

        long long int n; scanf("%lld", &n);

        if(n == 1 || n == 2 || n == 4) printf("NO\n");
        else if(odd(n)) printf("YES\n");
        else{
            while(n % 2 == 0){
                n = n/2;
            }
                if(n == 1) printf("NO\n");
                else printf("YES\n");

        }
    }

    return  0;
}

