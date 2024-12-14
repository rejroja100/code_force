#include<stdio.h>
int main()
{
    int a, b, flag = 0;
    scanf("%d%d", &a, &b);

    char str[a][b];


    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf(" %c", &str[i][j]);

        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){

            if(str[i][j] != 'W' && str[i][j] != 'B' && str[i][j] != 'G'){
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0) printf("#Black&White\n");
    else printf("#Color\n");


    return 0;
}
