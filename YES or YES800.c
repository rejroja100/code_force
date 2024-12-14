#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);


    while(t--){

        int flag1 = 0, flag2 = 0, flag3 = 0;
        char str[10];
        scanf("%s", str);

        if(str[0] == 'Y' || str[0] == 'y') flag1 = 1;
        if(str[1] == 'E' || str[1] == 'e') flag2 = 1;
        if(str[2] == 'S' || str[2] == 's') flag3 = 1;


            if(flag1 == 1 && flag2 == 1 && flag3 == 1) printf("YES\n");
            else printf("NO\n");
    }


    return 0;
}
