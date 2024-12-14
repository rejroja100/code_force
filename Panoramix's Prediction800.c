#include<stdio.h>
int is_prime(int x){
    if(x <= 1) return 0;

    for(int i = 2; i*i <= x; i++){
        if(x % i == 0) return 0;
     }

        return 1;
}

int next_prime(int x){
    x++;
    while(!is_prime(x)){
        x++;
    }
        return x;
}

int main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);


    if(next_prime(num1) == num2) printf("YES\n");
        else printf("NO\n");

    return 0;
}
