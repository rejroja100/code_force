#include<stdio.h>
int main()
{
    int t, max1 = 0, max2 = 0;
    scanf("%d", &t);



    while(t--){


        int num[4], temp = 0;
        scanf("%d%d%d%d",  &num[0], &num[1], &num[2], &num[3]);


        max1 = num[0];
        if(num[0] < num[1]) max1 = num[1];

        max2 = num[2];
        if(num[2] < num[3]) max2 = num[3];


        for(int i = 1; i < 4; i++){
            for(int j = 0; j < 3; j++){

                if(num[i] < num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }

        }
        if(max1 == num[2] && max2 == num[3]) {
            printf("YES\n");
        }
        else if(max1 == num[3] && max2 == num[2]) {
            printf("YES\n");
        }
        else printf("NO\n");


    }
    return 0;
}
