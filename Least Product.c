#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int n, count, flag = 0;
        scanf("%d", &n);
        int num[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &num[i]);
        }

                count = 0;

        for(int i = 0; i < n; i++){
            if(num[i] < 0) count++;
            if(num[i] == 0) flag = 1;
        }

        if(count % 2 != 0 || flag == 1) {
            printf("0\n");
        }
        else{
            printf("1\n");
            printf("1 0\n");
        }

    }
  return 0;
}
