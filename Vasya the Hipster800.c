#include<stdio.h>
int main()
{
    int a, b, min = 0, max = 0;
    scanf("%d%d", &a, &b);

    if(a > b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }



    int t = (max - min) / 2;
        printf("%d %d\n", min, t);

    return 0;
}
