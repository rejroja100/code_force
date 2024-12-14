#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);

    while(n--){

        int live, ability;
        scanf("%d%d", &live, &ability);

            if(live <= ability - 2){
                count++;
            }
    }

        printf("%d", count);

    return 0;
}
