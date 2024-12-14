#include<stdio.h>
int main()
{
    int t, b = 0, c = 0, a;
    scanf("%d", &t);

    while(t--){

        scanf("%d", &a);
        if(a != b){
            c++;
            b = a;
        }
    }

    printf("%d", c);

    return 0;
}

