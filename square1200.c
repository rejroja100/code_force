#include<stdio.h>
int even(int x){
    if(x % 2 == 0) return 1;
    else return 0;
}

int main()
{
    int test; scanf("%d", &test);


    while(test--){

        int n; scanf("%d", &n);

        if(even(n)) printf("%d\n", 4*n + 1);
        else{
            int t = n;
            t = (n - 1) /  2;

            if(even(t)) printf("%d\n", 2*n + 1);
            else printf("%d\n", n+1);
        }
    }

    return 0;
}
