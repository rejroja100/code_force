#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    while(t--){


        int n, count = 0, flag = 0;
        scanf("%d", &n);

        char str[n+1];
        scanf("%s", str);

                for(int i = 0; str[i] != '\0'; i++){

                if(str[i] == '.') count++;
                if(str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.'){
                    flag = 1;
                    break;
                }
            }

                if(flag == 1) printf("%d\n", 2);
                else printf("%d\n", count);

        }

    return 0;
}
