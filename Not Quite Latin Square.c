#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    while(t--){

        int count = 0, t = 3;

            while(t--){

                char str[4];
                scanf("%s", &str);

                for(int i = 0; i < 3; i++){
                    count += str[i];
                }
            }

    int sum = 657 - count;


                printf("%c\n", sum);

        }

    return 0;
}

