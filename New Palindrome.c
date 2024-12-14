#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while(t--){
        char str[52];
        scanf("%s", str);

        int len = strlen(str);
        int len2 = len / 2;

        if(len < 3) {
            printf("NO\n");
        }
        else {
            int flag = 0;
            for(int i = 0; i < len2-1; i++) {
                if(str[i] != str[i + 1]) {
                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}
