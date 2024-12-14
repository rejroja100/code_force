#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);

        while(t--){

            int n, count = 0, sq, qq, ss;
            scanf("%d", &n);

            ss = sqrt(n);
            qq = cbrt(n);
            sq = sqrt(qq);

            count = ss + qq - sq;

                printf("%d\n", count);
        }
    return 0;
}
