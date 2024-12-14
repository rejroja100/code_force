#include<stdio.h>
#include<math.h>
int main()
{
    int t; scanf("%d", &t);

    while(t--){

        int n; scanf("%d", &n);
        int num[n];

        for(int i = 0; i < n; i++) scanf("%d", &num[i]);

        long long int max = 10000000000;
        int min = -1000;


        for(int i = 0; i < n; i++){

            if(num[i] > min) min = num[i];
            if(num[i] < max) max = num[i];
        }


            printf("%d\n", abs(max - min));
    }

    return 0;
}


