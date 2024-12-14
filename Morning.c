#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

        while(t--){

            char digit[5];
            scanf("%s", digit);


            int a = (int)digit[0] - '0';
            int b = (int)digit[1] - '0';
            int c = (int)digit[2] - '0';
            int d = (int)digit[3] - '0';

           if(a == 0) a = 10;
           if(b == 0) b = 10;
           if(c == 0) c = 10;
           if(d == 0) d = 10;

            int result = 1 + abs(1 - a) + abs(b - a) + abs(c - b) + abs(c - d) + 3;

            printf("%d\n", result);

        }

    return 0;
}
