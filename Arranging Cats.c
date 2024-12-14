#include<stdio.h>
int main()
{
    int test; scanf("%d", &test);

    while(test--){

        long long int n, result; scanf("%lld", &n);

            result = 4*n + 1;

        printf("%lld\n", result);

    }

    return 0;
}
