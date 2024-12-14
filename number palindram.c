#include<stdio.h>
#include<string.h>
int main()
{
    long long int num, count, num2[100], num3[100];
    int temp = 0, i, j;

    scanf("%d", &num);

    for(int i =0; ; i++){

        temp = num % 10;
        num = num / 10;

        num2[i] = temp;
        count++;
        if(num == 0)break;
    }

    for(int i = 0,  j = count - 1; i < count; i++, j--){

        num3[j] = num2[i];

    }
        if(strcmp(num3, num2) == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    return 0;
}
