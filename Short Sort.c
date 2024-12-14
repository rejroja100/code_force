#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);

    while(t--){
        char str[4];
        scanf("%s", str);
        int flag = 0;

        if(str[0] == 'a' || str[1] == 'b' || str[2] == 'c') flag = 1;

        if(flag == 1) printf("YES\n");
        else printf("NO\n");
    }

 return 0;
}
