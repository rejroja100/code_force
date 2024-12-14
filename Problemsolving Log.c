#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

        while(t--){

            int n;
            scanf("%d", &n);

            char str[n];
        scanf("%s", str);

        int count = 0;
        int arr[26] = {0};

        for(int i = 0; i < n; i++){
            arr[str[i]-'A'+1]++;

        }

        for(int i = 1; i < 26; i++){
            if(arr[i] >= i) count++;
        }
         printf("%d\n", count);
   }


return 0;
}
