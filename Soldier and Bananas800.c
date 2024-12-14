#include<stdio.h>
int main()
{
    int prize, haved, n_buy, total = 0;
    scanf("%d%d%d", &prize, &haved, &n_buy);

    for(int i = 0; i <= n_buy; i++){
        total = total + prize*i;

    }

        if(total > haved){
            printf("%d\n", total - haved);
        }
        else{
            printf("%d\n", total - total);
        }

    return 0;
}
