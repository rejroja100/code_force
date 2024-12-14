#include<stdio.h>

int main()
{
    int test; scanf("%d", &test);

    while(test--){

        int n, d = 0, h = 0;
        scanf("%d", &n);

         d = n / 2020;
         h = n % 2020;

         if(d >= h) printf("YES\n");
         else printf("NO\n");

    }

    return  0;
}


