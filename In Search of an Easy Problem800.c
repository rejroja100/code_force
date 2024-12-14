#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count0 = 0, count1 = 0;


    while(n--){

        int num;
        scanf("%d", &num);

        //if(num == 0)count0++;
        if(num == 1)count1++;
    }


    if(count1 >= 1){
        printf("HARD\n");
    }
    else{
        printf("EASY\n");
    }

    return 0;
}
