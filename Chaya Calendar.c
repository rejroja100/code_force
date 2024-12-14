#include<stdio.h>
int function(int x, int y){
    for(int i = 1; i < 1000; i++){
        x *= i;
        if(x > y) return x;
        else function(x, y);
    }
}
int main()
{
    int t; scanf("%d", &t);

    while(t--){

        int n, result, x; scanf("%d", &n);
        int num[n];  for(int i = 0; i < n; i++) scanf("%d", num[i]);

        for(int i = 1; i < n; i++){
                 x = num[i];
            x = function(x, num[i]);
        }

        printf("%d\n", x);
    }

    return 0;
}
