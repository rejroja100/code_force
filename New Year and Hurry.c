#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);


    int d = 240 - k;
    int count = 0, i = 1, product = 0;


        while(n--){
            product += 5*i;
            if(product > d) break;

            count++;
            i++;
        }
            printf("%d\n", count);

    return 0;
}
