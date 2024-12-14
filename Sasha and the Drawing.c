#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);

    while(t--){

        int n, k; scanf("%d%d", &n, &k);
        int total = 4*n - 2;

        if(k == total) printf("%d\n", 2*n);
        else{
            if(k % 2 == 0) printf("%d\n", k/2);
            else printf("%d\n", (k + 1)/2);
        }

    }

    return 0;
}

