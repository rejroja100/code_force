#include<stdio.h>
int main()
{
    int t, count1 = 0, count2 = 0;
    scanf("%d", &t);

    while(t--){

        int a, b;
        scanf("%d%d", &a, &b);

        if(a < b)count2++;
        if(a > b) count1++;
    }

    if(count1 > count2) printf("Mishka\n");
    else if(count2 > count1) printf("Chris\n");
    else printf("Friendship is magic!^^\n");


    return 0;
}
