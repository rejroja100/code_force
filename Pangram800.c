#include<stdio.h>
#include<string.h>

int main() {
    int n, flag = 0, count[26] = {0};  // Initialize count array to zeros
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    for (int i = 0; i < n; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            count[(int)(str[i] - 'A')]++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            count[(int)(str[i] - 'a')]++;
        }
    }

            for(int i = 0; i < 26; i++){
                if(count[i] == 0){
                flag = 1;
                break;
                }
            }

        if(flag == 1) printf("NO\n");
        else printf("YES\n");


    return 0;
}
