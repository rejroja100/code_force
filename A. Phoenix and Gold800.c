#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);


        while(a--){

            int arr[a], sum = 0, max = 0;
            for(int i = 0; i < a; i++){
                 scanf("%d", &arr[i]);
                 sum += arr[i];
            }


            for(int i = 0; i < a; i++){
            if(arr[i]>arr[i+1]) max = arr[i];



    }
            if(sum == b || max < b) {
                printf("NO\n");
                break;
            }
            else{

                printf("YES\n");
                printf("%d ", max);
                for(int i = 0; i < a; i++){
                 if(arr[i] == max) continue;
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
        }


    }
    return 0;
}
