#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){

            int n, k; scanf("%d%d", &n, &k);

            for(int i = 0; i < k; i++) printf("%d ", i + 1);
            for(int i = n; i > k; i--) printf("%d ", i);
            printf("\n");
        }

    return 0;
}
