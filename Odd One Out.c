#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int a, b, c, out = 0;
        scanf("%d%d%d", &a, &b, &c);

        if(a == b) out = c;
        if(a == c) out = b;
        if(b == c) out = a;

        printf("%d\n", out);
    }

    return 0;
}

