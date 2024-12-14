#include<stdio.h>

int main()
{
    int n; scanf("%d", &n);

    while(n--){
        int a, b; scanf("%d%d", &a, &b);

        int num[a];
        for(int i = 0; i < a; i++) scanf("%d", &num[i]);

        int flag = 0;
        for(int i = 0; i < a; i++){
            if(num[i] == b) flag = 1
        }

        if(flag == 1) printf("YES\n");
        else printf("NO\n");

    }


    return 0;
}

