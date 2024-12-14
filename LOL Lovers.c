#include<stdio.h>
#include<string.h>
int main()
{
    int n; scanf("%d", &n);
    char str[n+1]; scanf("%s", str);

    int L1 = 0, L2 = 0, O1 = 0, O2 = 0;

        for(int i = 0; i <= n/2; i++){
            if(str[i] == 'L') L1++;
            if(str[i] == 'O') O1++;
        }

        for(int i = n/2; str[i] != '\0'; i++){
            if(str[i] == 'L') L2++;
            if(str[i] == 'O') O2++;
        }

        int flag = 0;

        if(L1 > 0 || L2 > 0 || O2 > 0 || O1 > 0){

            if(L1 > 0 && L2 > 0 && L1 == L2) flag = 1;
            if(O2 > 0 && O1 > 0 && O1 == O2) flag = 2;

        }

        if(flag > 0) printf("-1\n");
        else printf("%d\n", n/2);

    return 0;
}

