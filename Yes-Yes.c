#include<stdio.h>
#include<string.h>

int main()
{
    int t; scanf("%d", &t);
    getchar();

    while(t--){
            char str[] = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
            char s[54];
            scanf("%s", s);

            if(strstr(str, s) != 0) printf("YES\n");
            else printf("NO\n");
    }

    return 0;
}

