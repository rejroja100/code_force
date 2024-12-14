#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);


    int num[t];
        for(int i = 0; i < t; i++){
            scanf("%d", &num[i]);
        }

        for(int i = 0; i < t; i++){
            printf("%d ", num[i]);
        }

    return 0;
}
