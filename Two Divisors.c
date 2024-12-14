#include<stdio.h>

long long int gcd(long long int x, long long int y){
    while(y != 0){
        long long int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main()
{
    int n;
    scanf("%d", &n);

    while(n--){
        long long int a, b;
        scanf("%lld%lld", &a, &b);

        long long int lcm = (a * b) / gcd(a, b);

        if(lcm == a || lcm == b){
            lcm *= b/a;
        }


        printf("%lld\n", lcm);
    }

    return 0;
}
