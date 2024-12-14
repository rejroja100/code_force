#include<stdio.h>
int main()
{
    int total = 0, max = 0;
    int t;
    scanf("%d", &t);

    while(t--){
         int num1, num2;
        scanf("%d%d", &num1, &num2);

    total = total - num1 + num2;

     if(total > max) max = total;
    }

    printf("%d\n", max);


    return 0;

}
