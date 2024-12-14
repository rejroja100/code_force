#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);

    while(t--){

        int a, b; scanf("%d%d", &a, &b);
        int product = a*b;

        if(product % 2 == 0) printf("%d\n", product / 2);
        else printf("%d\n", (product + 1) / 2);

    }

    return 0;
}

