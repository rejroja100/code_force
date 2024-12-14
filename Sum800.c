#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);


    while(t--){

            int a, b, c, flag = 0;
            scanf("%d%d%d", &a, &b, &c);


            if(a + b == c)flag = 1;
            if(a + c == b)flag = 1;
            if(c + b == a)flag = 1;


            if(flag >= 1)printf("YES\n");
            else printf("NO\n");

    }

    return 0;
}
