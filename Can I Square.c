#include <stdio.h>
#include<math.h>

int main() {

    int a;
    scanf("%d", &a);

        while(a--){

            long long int n;
            scanf("%lld", &n);

            long long int i, num[n], sum = 0;

            for( i =0; i < n; i++){
                scanf("%lld", &num[i]);
                sum += num[i];
            }

               long long int t = sqrt(sum);

               if(sum == t*t) printf("YES\n");
               else printf("NO\n");
        }


    return 0;
}


