#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    while(t--){

        char num[10];
        scanf("%s", num);

        int total = (num[0] - '0') + (num[1] - '0') + (num[2] - '0');
        int total1 = (num[3] - '0') + (num[4] - '0') + (num[5] - '0');

        if(total == total1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
