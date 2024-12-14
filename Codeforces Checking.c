#include<stdio.h>
int main()
{
    int test; scanf("%d", &test);
    getchar();

    while(test--){

        char xx; scanf("%c", &xx);

        int flag = 0;
        if(xx == 'c' || xx == 'o' || xx == 'd' || xx == 'e' || xx == 'f' || xx == 'o' || xx == 'r' || xx == 'c' || xx == 's') flag = 1;

        if(flag == 1) printf("YES\n");
        else printf("NO\n");
    }

    return  0;
}
