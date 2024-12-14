#include<stdio.h>
int main()
{
    int num[4], total = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d", &num[i]);
    }

            total = num[0];
    for(int i = 1; i <= 3; i++){

        if(total < num[i]){
            total = num[i];
        }
    }

        for(int i = 0; i <= 3; i++){

        if(num[i] == total){
                continue;
        }
            printf("%d ", total - num[i]);
    }


    return 0;
}
