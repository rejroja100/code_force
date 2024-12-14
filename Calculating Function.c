#include<stdio.h>
int main()
{
    int sum = 0;
    long long int t=0;
    scanf("%lld", &t);

    if(t % 2== 0){
        printf("%lld\n", t / 2);
    }
    else{

        t = -(t + 1)/2;
        printf("%lld\n", t);
    }

    return 0;
}
