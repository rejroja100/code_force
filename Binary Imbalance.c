#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        char num[10000000];
        scanf("%s", num);

        int flag = 0;

        for(int i = 0; num[i] != '\0'; i++) {
            if(num[i] == '0') {
                printf("YES\n");
                flag = 1;
                break;  // Exit the loop as soon as you find '0'
            }
        }

        if(flag == 0) {
            printf("NO\n");
        }
    }

    return 0;
}
