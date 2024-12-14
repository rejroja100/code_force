#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int num[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }


    int sereja = 0, dima = 0, z = 0, l = 0, r = n -1;


    while(l <= r){

            if(z % 2 == 0){

                if(num[l] > num[r]){
                sereja += num[l];
                l++;
            }
            else{
                sereja += num[r];
                    r--;
                }
            }
            else{
                if(num[l] > num[r]){
                dima += num[l];
                l++;
            }
            else{
                dima += num[r];
                    r--;
                }
            }
        z++;
    }

    printf("%d %d\n", sereja, dima);

    return 0;
}
