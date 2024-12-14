#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    while(t--){
        int n, A = 0, B = 0;
        scanf("%d", &n);
        char str[n];
        scanf(" %s", str);

        for(int i = 0; i < n; i++){

            if(str[i] == 'A') A++;
            if(str[i] == 'B') B++;
        }

        if(A > B) printf("A\n");
        else if(A < B) printf("B\n");
        else printf("?\n");
    }

    return 0;
}
