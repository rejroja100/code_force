#include<stdio.h>
int main()
{
    int test; scanf("%d", &test);

    while(test--){

        int n; scanf("%d", &n);
        char num1[n+1], num2[n+1];

        scanf("%s %s", num1, num2);
        int count1 = 0, count2 = 0, total = 0;

        for(int i = 0; num1[i] != '\0'; i++){
            if(num1[i] == '1') count1++;
            if(num2[i] == '1') count2++;
        }

        for(int i = 0; num1[i] != '\0'; i++){
            if(num1[i] == '0' && num2[i] == '1') total++;
        }

        if(count1 > count2) total += count1 - count2;
        printf("%d\n", total);

    }

    return 0;
}

