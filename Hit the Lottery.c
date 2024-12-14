#include<stdio.h>
int main()
{
    int num, count = 0;
    scanf("%d", &num);

    if(num >= 100){
        count += num / 100;
        num = num % 100;
    }
    if(num >= 20){
        count += num / 20;
        num = num % 20;
    }
    if(num >= 10){
        count += num / 10;
        num = num % 10;
    }
    if(num >= 5){
        count += num / 5;
        num = num % 5;
    }
    if(num >= 1){
        count += num / 1;
        num = num % 1;
    }

        printf("%d\n", count);

    return 0;
}
