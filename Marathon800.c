#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int num[4], count = 0;
        for(int i = 0; i < 4; i++){
            scanf("%d", &num[i]);
        }

        for(int i = 1; i < 4; i++){
            if(num[0] < num[i]){
                count++;
            }
        }

            printf("%d\n", count);
    }

    return 0;
}
