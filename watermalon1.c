#include<stdio.h>
int main()
{
    int number, x;
    scanf("%d", &number);

    if(number == 2){
        printf("NO\n");
    }
    else{
        if(number % 2 == 0){

            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
