#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

        while(t--){

            int n, count1 = 0, count2 = 0;
            scanf("%d", &n);
            getchar();

            char str[n];
            scanf(" %s", str);

                for(int i = 0; str[i] != '\0'; i++){

                    if(str[i] == '+') count1++;
                    else count2++;
                }

            int result = abs(count1 - count2);
            printf("%d\n", result);

        }

    return 0;
}
