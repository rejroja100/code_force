#include<stdio.h>

void new_array(int x){
    int num[x];

    num[0] = 2;
    num[1] = 6;
    num[2] = 10;

    for(int i = 3; i < x; i++){
        num[i] = num[i-1] + 4;
    }

    for(int i = 0; i < x; i++) printf("%d ", num[i]);

}
int main()
{
    int n; scanf("%d", &n);

    while(n--){
        int t; scanf("%d", &t);

        new_array(t);

        printf("\n");
    }


    return 0;
}
