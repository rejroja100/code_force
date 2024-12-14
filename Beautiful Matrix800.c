#include<stdio.h>
int main()
{
    int matrix[5][5], i, j, dist;

    for(i = 0; i < 5; i++){
        for(j = 0; j <5; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j <5; j++){
            if(matrix[i][j] == 1){

                    dist = abs(2 - i) + abs(2 - j);
                break;
            }
        }
    }

        printf("%d\n", dist);


    return 0;
}
