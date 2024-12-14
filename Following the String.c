#include<stdio.h>

void solve()
{
    int n; scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

        int count[26] = {0};

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 26; j++){
                if(a[i] == count[j]){
                    printf("%c", 97 + j);
                    count[j]++;
                    break;
                }
            }
        }
    }
int main()
{
    int test; scanf("%d", &test);

    while(test--){
        solve();
        printf("\n");
    }

return 0;
}
