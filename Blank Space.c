#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int n, count = 0, max = 0;
        scanf("%d", &n);

        int num[n];


        for(int i = 0; i < n; i++){
            scanf("%d", &num[i]);

            if(num[i] != 1){
                count++;
                if(max < count) max = count;
            }
            else{
                count = 0;
            }
        }




        printf("%d\n", max);
    }

    return 0;
}


