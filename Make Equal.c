#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);

    while(t--){

        long long int n; scanf("%lld", &n);

        long long int num[n], sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%lld", &num[i]);
            sum += num[i];
        }

        long long int take = sum / n;
        long long int total = 0;
        //int count = 0;

            for(int i = 0; i < n; i++){
                total += num[i] - take;

                if(total < 0) break;
            }

            if(total == 0) printf("YES\n");
            else printf("NO\n");

        }

    return 0;
}
