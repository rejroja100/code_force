#include<stdio.h>
int main()
{
    int n, h, count1 = 0, count2 = 0, sum = 0;
    scanf("%d%d", &n, &h);

    while(n--){

        int x;
        scanf("%d", &x);

        if(x > h) count2 = count2 + 2;
        else count1++;
    }

    sum = count1 + count2;


    printf("%d", sum);

    return 0;
}
