#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        char str[100];
        scanf("%s", str);

        int len = strlen(str);

        if(len <= 10){
            printf("%s\n", str);
        }
        else{

            int x = len - 2;

            printf("%c%d%c\n", str[0], x, str[len -1]);
        }
    }

    return 0;
}

