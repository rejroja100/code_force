#include<stdio.h>

int main()
{
    int test; scanf("%d", &test);

    while(test--){

        int flag = 0;
        char str[53] = {0};
        scanf("%s", str);

        for(int i = 0 ; str[i] != '\0'; i++){
            if(str[i] == 'N') flag++;
        }

         if(flag == 1) printf("NO\n");
         else printf("YES\n");

    }

    return  0;
}



