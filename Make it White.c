#include<stdio.h>
#include<math.h>

int main()
{
    int test; scanf("%d", &test);

    while(test--){

        int n; scanf("%d", &n);
        char str[n+1];

        scanf("%s", str);

        int has_black = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == 'B'){
                has_black = 1;
                break;
            }
        }

        if (!has_black) {
            printf("0\n");
            continue;
        }

        int x = 0, y = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == 'B'){
                x = i;
                break;
            }
        }

        for(int j = n-1; j >= 0; j--){
            if(str[j] == 'B'){
                y = j;
                break;
            }
        }

        if (x == y) {
            printf("1\n");
            continue;
        }

        int result = abs(x-y) + 1;
        printf("%d\n", result);
    }

    return 0;
}
