#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){

        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);


        if( a == 0 && b == 0 && c == 0){
            printf("%d %d %d\n", 1, 1, 1);
        }
        else if(a > b && a > c){
            printf("%d %d %d\n", a - a, a - b + 1, a - c + 1);
        }
        else if(b > a && b > c){
            printf("%d %d %d\n", b - a + 1, b - b, b - c + 1);
        }
        else{
            printf("%d %d %d\n", c - a + 1, c - b + 1, c - c);
        }


    }

    return 0;
}



