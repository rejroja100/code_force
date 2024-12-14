#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);

    while(t--){
        int a, b; scanf("%d%d", &a, &b);

        int max = a ;
        if(b > a) max = b;

        int result = 6 - max + 1;

        switch(result){
            case 1:
                printf("1/6\n");
                break;
             case 2:
                printf("1/3\n");
                break;
            case 3:
                printf("1/2\n");
                break;\
            case 4:
                printf("2/3\n");
                break;
            case 5:
                printf("5/6\n");
                break;
            case 6:
                printf("1/1\n");
                break;
        }
    }

    return 0;
}
