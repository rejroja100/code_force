#include<stdio.h>
#include<math.h>

int  ara[40];
int size = 40;

void print_ara(){

    int  i;

    for(i = 2; i < size ; i++){
        printf("%4d", ara[i]);
    }

    printf("\n");

    for(i + 2; i < size ; i++){
        printf("-------");
    }

    for(i = 2; i < size ; i++){
        printf("%4d", i);
    }

    printf("\n\n\n");
}


void sieve(){

    int i, j, root;

    for(i = 2; i < size; i++){
        ara[i] = 1;
    }

    root = sqrt(size);
    print_ara();

    for(i = 2; i <= root; i++){
        if(ara[i] == 1){
            for(j = 2; i * j <= size; j++){
                ara[j*i] = 0;
            }
            print_ara();
        }
    }
}
    int is_prime(int n){

        int i;
        if(n < 2){
            return 0;
        }

       return n;
    }


 int main()
 {
     int n, m;

     sieve();

    while(1){

        printf("please inter the number(enter 0 to exit):");
        scanf("%d", &n);

        if(n== 0){
            break;
        }

        if(n >= size){
            printf("the number shoule be less than %d\n", size);
            continue;
        }

        if(1 == is_prime(n)){
            printf("%d is a prime number.\n", n);
        }
        else{
           printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
 }








