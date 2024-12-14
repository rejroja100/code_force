#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);

    while(t--){
        int n, m, k; scanf("%d%d%d", &n, &m, &k);

        int num1[n], num2[m];

        int count1 = 0, count2 = 0;

        for(int i = 0; i < n; i++){
            scanf("%d", &num1[i]);
            if(num1[i] < k) count1++;
        }
        for(int i = 0; i < m; i++){
            scanf("%d", &num2[i]);
            if(num2[i] < k) count2++;
        }

        int result = count1*count2;

        printf("%d\n", result);

    }

    return 0;
}
