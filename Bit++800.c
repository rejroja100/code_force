#include<stdio.h>
int main()
{
    int t, ans = 0;
    char str[5];


    scanf("%d", &t);

    while(t--){

        scanf("%s", str);
        if(str[1] == '+') ans++;
        else ans--;
    }

        printf("%d", ans);

    return 0;
}
