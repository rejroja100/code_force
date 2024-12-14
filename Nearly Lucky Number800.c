#include<stdio.h>

int main()
{

    char num[100];
    scanf("%s", num);
    int flag = 0, count = 0;


        for(int i = 0; num[i] != '\0'; i++){
        if(num[i] == '7' || num[i] == '4'){
            count++;
            }
        }

        if(count == 7 || count == 4) printf("YES\n");
        else printf("NO\n");

    return 0;
}

