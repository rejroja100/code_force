#include<stdio.h>

int gdc(int x, int y){
    while(y != 0){
        int t = y;
        y = x % y;
        x = t;
    }
  return x;
}
int main()
{
    int num, count = 0, arr[400], a = 0, j = 0;
    scanf("%d", &num);


    for(int i = 0; i < num; i++){
        a = gdc(num, i);
        if(a == 1){
            count++;
            while(1){
                arr[j] = i;

                j++;
                break;
            }
        }
    }

    printf("%d\n", count);
    for(int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}
