#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {

        char num[11];
        scanf(" %s", num);
        int flag = 0;

        for(int i = 0; num[i] != 10 ; i++){

            if(num[i] == '1'){
                flag = 1;
                break;
            }
            if(num[i] == '3'){
                flag = 3;
                break;
            }
        }

            if(flag ==1 ) printf("13\n");
            else if(flag ==3 ) printf("31\n");
            else printf("-1\n");


    }

    return 0;
}


