#include<stdio.h>
int main()
{
   int num[4]; for(int i = 0; i < 4; i++) scanf("%d", &num[i]);
   int count = 0;

        for(int i = 0; i < 3; i++){
            for(int j = i + 1; j < 4; j++){

                if(num[i] > num[j]){
                    int temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }

        for(int i = 1; i < 4; i++){
            if(num[i] == num[i-1]) count++;
        }

            printf("%d\n", count);

    return 0;
}
