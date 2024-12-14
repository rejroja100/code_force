#include<stdio.h>
int main(){

    int t;
    scanf("%d", &t);

    while(t--){

        int num[3], temp = 0;
        scanf("%d%d%d", &num[0], &num[1], &num[2]);

        for(int i=0; i < 3; i++){
            for(int j = 0; j < 2; j++){

                if(num[i] < num[j]){

                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }

        printf("%d\n", num[1]);
    }


    return 0;
}
