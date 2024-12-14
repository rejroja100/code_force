#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n == 1) printf("NO\n");
    else{
        int num[n], i, j;
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

       for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
            int temp = num[j];
            num[j] = num[j + 1];
            num[j + 1] = temp;
            }
        }
    }

            int flag = 0;

            for(i = 1; i < n; i++){
                if(num[i] != num[i-1]){
                    flag = 1;
                    break;
                }
            }

            if(flag == 1) printf("%d\n", num[i]);
            else printf("NO\n");

    }


    return 0;
}
