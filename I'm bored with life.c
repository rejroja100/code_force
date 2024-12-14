#include<stdio.h>

        int fact(int x){
        int sum = 1;

        while(x--){
            sum += sum*x;
        }
        return sum;
    }

int main()
{
    int a, b, min = 0;
    scanf("%d%d", &a, &b);

    if(a > b){
        min = b;
    }
    else{
        min = a;
    }

        printf("%d\n", fact(min));

    return 0;
}

