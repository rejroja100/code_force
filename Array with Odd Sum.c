#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);

    while(n--){
        int t;
        scanf("%d", &t);

        int num[t], sum = 0, even = 0, odd = 0;

        for(int i = 0; i < t; i++){
            scanf("%d", &num[i]);
            sum += num[i];
            if(num[i] % 2 == 0) even += num[i];
            else odd += num[i];
        }

            if(sum % 2 != 0) printf("YES\n");
            else if(even >= 1 && odd >= 1) printf("YES\n");
            else printf("NO\n");

            //printf("%d %d %d", sum, even, odd);

    }

    return 0;
}
